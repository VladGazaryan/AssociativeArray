#ifndef LIST_H
#define LIST_H

//Узел
template <typename TData>
struct Node{
    Node* next;
    Node* prev;
    TData data;
};

//Двусвязный список
template <typename TData>
class List{
protected:
    Node<TData>* head;
public:
    List() //Конструктор
    {
        head=NULL;
    }
    ~List() //Детруктор
    {
    }
    List(const List& L); //Конструктор копии

    void add(TData D); //Добавление в конец
    void remove(); //Удаление последнего элемента

    TData getFirst(); //Возврат первого элемента
    TData getLast(); //Возврат последнего элемента
    TData get(int ind); //Возврат элемента по индексу [0;size-1]

    bool isEmpty(); //Проверка на пустоту
    int size(); //Размер списка
};



#endif // LIST_H
