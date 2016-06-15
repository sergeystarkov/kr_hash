#ifndef THEORYFORM_H
#define THEORYFORM_H

#include <QWidget>

namespace Ui {
class theoryForm;
}

class theoryForm : public QWidget
{
    Q_OBJECT

public:
    explicit theoryForm(QWidget *parent = 0);
    ~theoryForm();

    void loadTitles();

private slots:
    void on_listWidget_currentRowChanged(int currentRow);
    void on_nextPage_clicked();
    void on_prevPage_clicked();

private:
    Ui::theoryForm *ui;

    void loadText(int index);
    int curRow = 0;


};

#endif // THEORYFORM_H
