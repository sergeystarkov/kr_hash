#include "dialogfio.h"
#include "ui_dialogfio.h"
#include <QMessageBox>
dialogFIO::dialogFIO(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogFIO)
{
    ui->setupUi(this);
}

dialogFIO::~dialogFIO()
{
    delete ui;
}

void dialogFIO::on_ok_clicked()
{
    if(!ui->FIO->text().isEmpty())
    {
        FIO = ui->FIO->text();
        if(!ui->group->text().isEmpty()) {
            gr = ui->group->text();
            QDialog::accept();
        }
    }
}

void dialogFIO::on_cansel_clicked()
{
    QDialog::reject();
}
