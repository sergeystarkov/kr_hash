#include "hash.h"
#include <QMessageBox>
#include <QString>
#include <QChar>


hash::hash(QObject *parent) : QObject(parent)
{
}
void hash::clearHashTable(list (&hashT)[sizeArray])
{
    collision = 0;
    values = 0;
    for(int i=0; i<sizeArray; ++i)
    {
        list *current = &hashT[i];
        if(current->index != NULL)
        {
            current->index = NULL;
            if(current->next != NULL)
            {
                list *head = &hashT[i];
                current = current->next;
                head->next = NULL;
                while(true)
                {
                    if(current->next != NULL)
                    {
                        list *tmp = current;
                        current = current->next;
                        delete tmp;
                    }else{
                        delete current;
                        break;
                    }
                }
            }
        }
    }
}
void hash::writeHashTable(list *current, int index)
{
    ++values;
    if(current->index == NULL){
        current->index = index;
    }else
    {
        while(current->index != NULL)
        {
            if(current->next == NULL)
            {
                list *n = new list;
                current->next = n;
                n->index = index;
                ++collision;
                break;
            }
            else{
                current = current->next;
            }
        }
    }
}

void hash::generateBadHASH(QVector<QString> *array)
{
    clearHashTable(hashBad);

    int status = 0;

    for(int count = 0; count < array->size(); ++count)//проходим весь массив
    {
        int hashKey = badHash(array->at(count));

        //Запись в хеш таблицу
        list *current = &hashBad[hashKey];
        writeHashTable(current,count);

        status++;
        emit stat(status,array->size());
    }
}
int hash::badHash(QString str)
{
    if(str != "")//Если строка не пустая
    {
        //хеш функция
        int hashKey = 0;
        int len = str.length();

        for(int i = 0 ; i < len ; i += 2)
        {
            hashKey += str[0].unicode();
            if(len > 1)
                hashKey += str[len-1].unicode();
            hashKey %= sizeArray;

            //hashKey += array->at(count)[i].unicode();
            //if(len > i+1) hashKey *= array->at(count)[i+1].unicode();
            //hashKey %= sizeArray;
        }
        return hashKey %= sizeArray;
    }
    else return 0;
}


void hash::generateGoodHASH(QVector<QString> *array)
{
    clearHashTable(hashGood);

    int status = 0;

    for(int count = 0; count < array->size(); ++count)//проходим весь массив
    {
        int hashKey = goodHash(array->at(count));

        //Запись в хеш таблицу
        list *current = &hashGood[hashKey];
        writeHashTable(current,count);

        status++;
        emit stat(status,array->size());
    }
}

int hash::goodHash(QString str)
{
    if(str != "")//Если строка не пустая
    {
        long long hashKey = 0;
        int len = str.length();
        for(int i = 0 ; i < len ; ++i)
        {
            int s = str[i].unicode();
            hashKey = ((hashKey * 37)+s)%sizeArray;
        }
        return hashKey;
    }
    else return 0;
}

int hash::searchBadHash(QString str)
{
    int hash = badHash(str);
    list *current = &hashBad[hash];
    while(true)
    {
        if(array.at( current->index ) == str)
        {
            return current->index;
            break;
        }
        else {
            if(current->next != NULL)
                current = current->next;
            else
                return 0;
        }
    }
}

int hash::searchGoodHash(QString str)
{
    int hash = goodHash(str);
    list *current = &hashGood[hash];
    while(true)
    {
        if(array.at( current->index ) == str)
        {
            return current->index;
            break;
        }
        else {
            if(current->next != NULL)
                current = current->next;
            else
                return 0;
        }
    }
}




