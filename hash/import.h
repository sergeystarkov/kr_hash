#ifndef IMPORT_H
#define IMPORT_H

#include <QObject>
#include <QFile>

class import : public QObject
{
    Q_OBJECT
public:
    explicit import(QObject *parent = 0);

signals:

public slots:
    bool loadFromFile(QString path, QVector<QString> *array); //Записывает массив из файла

};

#endif // IMPORT_H
