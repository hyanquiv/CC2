#include "Node.hpp"

template <typename T>
Node<T>::Node(T data)
{
    this->data = data;
    next = nullptr;
}

template <typename T>
T Node<T>::getData()
{
    return data;
}

template <typename T>
void Node<T>::setNext(Node<T> *n)
{
    next = n;
}

template <typename T>
Node<T> *Node<T>::getNext()
{
    return next;
}