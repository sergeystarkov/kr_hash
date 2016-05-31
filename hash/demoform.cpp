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
}

demoForm::~demoForm()
{
    this->deleteLater();
    delete ui;
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
}

//Кнопка запускает процедуру генерации хеш таблиц (плохой и хорошей)
void demoForm::on_genHash_clicked()
{
    hashFoo.generateBadHASH(&hashFoo.array);    //генерирует хеш таблицу по плохому алгоритму
    hashFoo.generateGoodHASH(&hashFoo.array);   //генерирует хеш таблицу по хорошему алгоритму

    //ui->textBrowser->append(hashFoo.array.at(23434));//работает!!!
}
