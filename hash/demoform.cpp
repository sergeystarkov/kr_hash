#include "demoform.h"
#include "ui_demoform.h"

#include <QWebEnginePage>

#include <QtSql>
#include <QDir>

demoForm::demoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::demoForm)
{
    ui->setupUi(this);
    connect(&hashFoo,SIGNAL(stat(int,int)),this,SLOT(progressBar(int,int)));
}

demoForm::~demoForm()
{
    this->deleteLater();
    delete ui;
}

void demoForm::progressBar(int current, int end)
{
    ui->progressBar->setRange(0,end);
    ui->progressBar->setValue(current);
}

//Импорт слов из тексторого файла в массив класса hash
void demoForm::on_importButton_clicked(){
    importArray();
}
void demoForm::importArray()
{
    QString path = QDir::currentPath() + "/words.txt";
    if(!imp.loadFromFile(path, &hashFoo.array)){ //импортируем в пеменную класса hash
        messageBox("Ошибка импорта");
    }
    else {
        ui->genHash->setEnabled(true);
        ui->importButton->setEnabled(false);
        ui->searchLine->setEnabled(true);
        ui->statusbar->setText("База слов загружена");
    }
}



//Кнопка запускает процедуру генерации хеш таблиц (плохой и хорошей)
void demoForm::on_genHash_clicked()
{
    ui->statusbar->setText("Генерируется хеш-таблица по плохому алгоритму");
    hashFoo.generateBadHASH(&hashFoo.array);    //генерирует хеш таблицу по плохому алгоритму

    ui->textBrowser->append("Число коллизий BadHash:");
    ui->textBrowser->append(QString::number(hashFoo.collision));


    ui->statusbar->setText("Генерируется хеш-таблица по хорошему алгоритму");
    hashFoo.generateGoodHASH(&hashFoo.array);   //генерирует хеш таблицу по хорошему алгоритму

    ui->textBrowser->append("Число коллизий GoodHash");
    ui->textBrowser->append(QString::number(hashFoo.collision));

    ui->statusbar->setText("Все-хеш-таблицы сгенерированы");

    ui->textBrowser->append("Всего слов:");
    ui->textBrowser->append(QString::number(hashFoo.values));

}

void demoForm::on_search_clicked()
{
    QString str = ui->searchLine->text();
    str.simplified();
    search(str);
}
void demoForm::search(QString str)
{
    QTime timer;
    int index;

    /////////////////////////////////////////////////////////
    //Простой поиск перебором
    //старт таймера
    timer = QTime::currentTime();

    for(int k = 0; k<1000; k++)
    {
        for(int i = 0; i < hashFoo.array.length(); ++i)
        {
            if(hashFoo.array.at(i) == str)
            {
                index = i;
                break;
            }
        }
    }

    ui->textBrowser->append("Простой метод");
    ui->textBrowser->append(QString::number(index));

    //Стоп таймера
    searchResult[0][1] = timer.elapsed();
    searchResult[0][0] = index;

    /////////////////////////////////////////////////////////


    /////////////////////////////////////////////////////////
    //поиск в помощью плохой хеш функции
    //старт таймера
    timer = QTime::currentTime();

    for(int k = 0; k<1000; k++)
        index = hashFoo.searchBadHash(str);

    ui->textBrowser->append("Плохой хеш");
    ui->textBrowser->append(QString::number(index));

    //Стоп таймера
    searchResult[1][1] = timer.elapsed();
    searchResult[1][0] = index;
    /////////////////////////////////////////////////////////


    /////////////////////////////////////////////////////////
    //Поиск с помощью хорошей хеш функции
    //старт таймера
    timer = QTime::currentTime();

    for(int k = 0; k<1000; k++)
        index = hashFoo.searchGoodHash(str);

    ui->textBrowser->append("Хороший хеш");
    ui->textBrowser->append(QString::number(index));

    //Стоп таймера
    searchResult[2][1] = timer.elapsed();
    searchResult[2][0] = index;
    /////////////////////////////////////////////////////////
}

void demoForm::loadHtml()
{
    QString str = "file:///" + QDir::currentPath() + "/html/index.html";
    ui->web->load(str);
}

void demoForm::on_searchLine_textEdited(const QString &arg1)
{
    if(arg1 != "")
    {
        ui->search->setEnabled(true);
        ui->addWord->setEnabled(true);
    }
    else {
        ui->search->setEnabled(false);
        ui->addWord->setEnabled(false);
    }
}
