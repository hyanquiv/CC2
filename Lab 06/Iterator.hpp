#ifndef ITERATOR_HPP
#define ITERATOR_HPP
#include "Node.cpp"

template <typename T>
class Iterator
{
private:
    Node<T> *current;

public:
    Iterator() : current(nullptr) {}

    Iterator(Node<T> *pNode) : current(pNode) {}

    Iterator<T> &operator=(Node<T> *pNode)
    {
        this->current = pNode;
        return *this;
    }

    Iterator<T> &operator++()
    {
        if (current)
            current = current->getNext();
        return *this;
    }

    Iterator<T> operator++(int)
    {
        Iterator<T> iterator = *this;
        ++*this;
        return iterator;
    }

    bool operator!=(const Iterator<T> &iterator)
    {
        return current != iterator.current;
    }

    T operator*()
    {
        return current->getData();
    }
};
#endif