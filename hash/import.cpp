#include "import.h"
#include "hash.h"

import::import(QObject *parent) : QObject(parent)
{

}

//Считывает построчно из файла path  и заносит всё в массив Vector
bool import::loadFromFile(QString path, QVector<QString> *array)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly))
        return false;
    while(!file.atEnd()){
        QString str = file.readLine();
        str = str.simplified();
        array->append(str);
    }
    file.close();
    return true;
}
