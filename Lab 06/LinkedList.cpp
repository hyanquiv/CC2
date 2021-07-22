#include <iostream>
#include "LinkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
    length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *iterator = head;
    while (head != nullptr)
    {
        iterator = head->getNext();
        delete head;
        head = iterator;
    }
    length = 0;
}

template <typename T>
bool LinkedList<T>::isEmpty()
{
    if (head == nullptr)
        return true;
    else
        return false;
}

template <typename T>
void LinkedList<T>::insert(T info)
{
    Node<T> *toAdd = new Node<T>(info);
    if (isEmpty())
    {
        head = toAdd;
    }
    else
    {
        Node<T> *iterator = head;
        while (iterator->getNext() != nullptr)
        {
            iterator = iterator->getNext();
        }
        iterator->setNext(toAdd);
    }
    length++;
}

template <typename T>
void LinkedList<T>::remove(int position)
{
    if (isEmpty())
        return;
    else if (position > length)
        return;
    else
    {
        if (position == length)
        {
            Node<T> *iterator = head;
            while (iterator->getNext()->getNext() != nullptr)
                iterator = iterator->getNext();
            delete iterator->getNext();
            iterator->setNext(nullptr);
        }
        else if (position == 1)
        {
            Node<T> *iterator = head;
            head = iterator->getNext();
            delete iterator;
        }
        else if (position > 1 && position < length)
        {
            Node<T> *nodeIterator = head;
            int positionIterator = 0;
            while (position - 2 != positionIterator)
            {
                nodeIterator = nodeIterator->getNext();
                positionIterator++;
            }
            Node<T> *toDelete = nodeIterator->getNext();
            nodeIterator->setNext(nodeIterator->getNext()->getNext());
            delete toDelete;
        }
        length--;
    }
}

template <typename T>
Node<T> * LinkedList<T>::begin()
{
    return head;
}

template <typename T>
Node<T> *LinkedList<T>::end()
{
    Node<T> *iterator = head;
    while (iterator)
        iterator = iterator->getNext();
    return iterator;
}

std::ostream &operator<<(std::ostream &output, const LinkedList<int> &o)
{
    Node<int> *iterator = o.head;
    output << "head -> ";
    while (iterator)
    {
        output << iterator->getData() << " -> ";
        iterator = iterator->getNext();
    }
    output << "nullptr\n";
    output << "Tamaño: " << o.length << "\n";
    return output;
}