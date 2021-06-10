#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "Node.cpp"

class LinkedList
{
private:
    Node *head;
    int length;
public:
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    void insert(int,int);
    void remove(int);
    void print();
    friend std::ostream &operator<<(std::ostream &output, const LinkedList &o);
};

#endif