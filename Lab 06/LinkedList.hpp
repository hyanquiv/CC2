#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "Iterator.hpp"

template <typename T>
class LinkedList
{
private:
    Node<T> *head;
    int length;

public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void insert(T);
    void remove(int);
    Node<T>* begin();
    Node<T>* end();
    friend std::ostream &operator<<(std::ostream &output, const LinkedList &o);
};

#endif