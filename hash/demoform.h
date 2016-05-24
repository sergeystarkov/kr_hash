#ifndef DEMOFORM_H
#define DEMOFORM_H


#include <QWidget>

#include <QTimer>

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


private:
    Ui::demoForm *ui;

signals:
    void messageBox(QString);
};

#endif // DEMOFORM_H
