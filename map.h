#ifndef MAP_H
#define MAP_H

#include "list.h"
#include <iostream>

using namespace std;

//Пара (ключ,значение)
template <typename TKey, typename TInf>
struct Pair{
    TKey key;
    TInf inf;
};

//Ассоциативный массив
template <typename TKey, typename TInf>
class Map: public List< Pair<TKey, TInf> >{
public:
    void sort(); //Сортировка по ключу
    bool find(TKey K); //Проверка наличия элемента
    TInf& operator[](TKey K); //Обращение к элементу масива

    template <typename TK, typename TD>
    friend ostream& operator<<(ostream &os, Map<TK, TD>& L); //Вывод в поток
    template <typename TK, typename TD>
    friend istream& operator>>(istream &is, Map<TK, TD>& L); //Ввод в поток
};

#endif // MAP_H

