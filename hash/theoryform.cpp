#include "theoryform.h"
#include "ui_theoryform.h"
#include <QtSql>
theoryForm::theoryForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::theoryForm)
{
    ui->setupUi(this);
    loadTitles();
}

theoryForm::~theoryForm()
{
    this->deleteLater();
    delete ui;
}

void theoryForm::on_listWidget_currentRowChanged(int currentRow)
{
    curRow = currentRow;
    loadText(currentRow+1);
}

void theoryForm::loadText(int index)
{
    QSqlQuery query("SELECT text FROM theory WHERE num="+QString::number(index)+";");
    query.next();
    QString str = query.value(0).toString();
    ui->textBrowser->setText(str);
}

void theoryForm::loadTitles()
{
    QSqlQuery query("SELECT title FROM theory");
    while (query.next()) {
        QString str = query.value(0).toString();
        ui->listWidget->addItem(str);
    }
}

void theoryForm::on_nextPage_clicked()
{
    if(ui->listWidget->count() < curRow) return;
    ++curRow;
    loadText(curRow+1);
    ui->listWidget->setCurrentRow(curRow);
}

void theoryForm::on_prevPage_clicked()
{
    if(curRow < 0) return;
    --curRow;
    loadText(curRow+1);
    ui->listWidget->setCurrentRow(curRow);
}
