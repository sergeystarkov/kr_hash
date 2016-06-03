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

    void progressBar(int current,int end);

    void on_importButton_clicked();

    void on_genHash_clicked();

    void on_search_clicked();

    void on_searchLine_textEdited(const QString &arg1);

private:
    Ui::demoForm *ui;

    import imp;
    hash hashFoo;

    //Импорт массива из файла
    void importArray();

    void search(QString str);

    int searchResult[3][2];

    void loadHtml();
    //void viewGraph();


signals:
    void messageBox(QString);
};

#endif // DEMOFORM_H
