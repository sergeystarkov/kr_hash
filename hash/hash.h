#ifndef HASH_H
#define HASH_H

#include <QObject>
#include <QVector>

//структура, хранящая указатель на элемент Vector<QString> array
//В случае коллизии хранит несколько указателей в виде связного списка
struct list{
    list *next = NULL;
    int index = 0;// индекс в массиве исходных данных
};


class hash : public QObject
{
    Q_OBJECT

private:
    static unsigned const int sizeArray = 1000000; //размер массива для hash таблицы

public:
    explicit hash(QObject *parent = 0);

    //Массив слов (база данных или исходный массив данных) для которого нужно составить hash таблицу
    QVector<QString> array;

    //массивы индексов Hash функции
    list hashBad[sizeArray]; //Для плохого метода хеширования
    list hashGood[sizeArray];//Для хорошего метода хеширования
    //этот массив хранит в себе структуру list, в которой содержится связный список.
    //каждый узел связного списка хранит индекс данных из исходного массива и ссылку на
    //следующий узел для возможности разрешения коллизий.

public slots:
    void generateBadHASH(QVector<QString> *array);
    void generateGoodHASH(QVector<QString> *array);
};

#endif // HASH_H
