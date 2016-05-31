#include "hash.h"
#include <QMessageBox>
#include <QString>
#include <QChar>
hash::hash(QObject *parent) : QObject(parent)
{
}

void hash::generateBadHASH(QVector<QString> *array)
{int ind = 0, col = 0;
    for(int count = 0; count < array->size(); ++count)//проходим весь массив
    {
        if(array->at(count) != "")//Если строка не пустая
        {
            //непосредственно хеш функция
            int hashKey = 0;
            for(int i = 0 ; i < array->at(count).size()-1 ; i++)
            {
                hashKey += array->at(count)[i].unicode();
            }
            hashKey %= 1000000;

            //Запись в хеш таблицу
            if(hashKey < sizeArray)
            {
                list current = hashBad[hashKey];
                while(current.next != NULL)
                {
                    current.next;
                    col++;
                }
                current.index = count;
                ind++;
            }
        }
    }
QMessageBox m;
m.setText(QString::number(col));
m.exec();

//У функции нет коллизий!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

void hash::generateGoodHASH(QVector<QString> *array)
{

}

