#include "hash.h"

hash::hash(QObject *parent) : QObject(parent)
{
}

void hash::generateBadHASH(QVector<QString> *array)
{
    for(int count = 0; count < array->size(); count++)
    {
        hashBad[count].index = count;
    }
}

void hash::generateGoodHASH(QVector<QString> *array)
{

}

