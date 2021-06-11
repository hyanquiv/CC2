#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    head = nullptr;
    length = 0;
}

LinkedList::~LinkedList()
{
    Node *iterator = head;
    while (head != nullptr)
    {
        iterator = head->getNext();
        delete head;
        head = iterator;
    }
    length = 0;
}

bool LinkedList::isEmpty()
{
    if (head == nullptr)
        return true;
    else
        return false;
}

void LinkedList::insert(int info)
{
    Node *toAdd = new Node(info);
    if (isEmpty())
        head = toAdd;
    else if (info < head->getData())
    {
        toAdd->setNext(head);
        head = toAdd;
    }
    else
    {
        Node *iterator = head;
        while (iterator->getNext() != nullptr && iterator->getNext()->getData() < info)
            iterator = iterator->getNext();
        toAdd->setNext(iterator->getNext());
        iterator->setNext(toAdd);
    }
    length++;
}

void LinkedList::remove(int position)
{
    if (isEmpty())
        return;
    else if (position > length)
        return;
    else
    {
        if (position == length)
        {
            Node *iterator = head;
            while (iterator->getNext()->getNext() != nullptr)
                iterator = iterator->getNext();
            delete iterator->getNext();
            iterator->setNext(nullptr);
        }
        else if (position == 1)
        {
            Node *iterator = head;
            head = iterator->getNext();
            delete iterator;
        }
        else if (position > 1 && position < length)
        {
            Node *nodeIterator = head;
            int positionIterator = 0;
            while (position - 2 != positionIterator)
            {
                nodeIterator = nodeIterator->getNext();
                positionIterator++;
            }
            Node *toDelete = nodeIterator->getNext();
            nodeIterator->setNext(nodeIterator->getNext()->getNext());
            delete toDelete;
        }
        length--;
    }
}

std::ostream &operator<<(std::ostream &output, const LinkedList &o)
{
    Node *iterator = o.head;
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