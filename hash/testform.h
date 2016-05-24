#ifndef TESTFORM_H
#define TESTFORM_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class testForm;
}

class testForm : public QWidget
{
    Q_OBJECT

public:
    explicit testForm(QWidget *parent = 0);
    ~testForm();
    void testing();
    QString testFIO;
    QString testGroup;

private:
    Ui::testForm *ui;
    void loadQuestions();
    void openQuestion(int);
    int currentAnswer;
    int correctCurrentAnswer;
    static const int changeTest = 10;//Определяет, на какое колличество вопросов ответить
    int numTest[changeTest][2]; //Массив с номерами тестов, выбранных случаныйм образом из базы
    void results();
    void checkOtv(int otv);
    void nextQuestion();


signals:
    void  messageBox(QString);
    void blockWindow(bool);

private slots:
    void on_send_clicked();
};

#endif // TESTFORM_H
