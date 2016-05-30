#ifndef DEMOFORM_H
#define DEMOFORM_H


#include <QWidget>

#include "import.h"
#include "hash.h"

namespace Ui {
class demoForm;
}

class demoForm : public QWidget
{
    Q_OBJECT

public:
    explicit demoForm(QWidget *parent = 0);
    ~demoForm();

public slots:


private slots:    


    void on_importButton_clicked();

    void on_genHash_clicked();

private:
    Ui::demoForm *ui;

    //Импорт массива из файла
    void importArray();
    //QString array[];

    import imp;
    hash hashFoo;

signals:
    void messageBox(QString);
};

#endif // DEMOFORM_H
