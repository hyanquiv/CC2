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
        iterator = head->next;
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

void LinkedList::insert(int data, int position)
{
    Node *toAdd = new Node(data);
    if (position >= length)
    {
        if (isEmpty())
            head = toAdd;
        else
        {
            Node *iterator = head;
            while (iterator->next != nullptr)
            {
                iterator = iterator->next;
            }
            iterator->next = toAdd;
        }
    }
    else if (position == 1)
    {
        toAdd->next = head;
        head = toAdd;
    }
    else if (position < length)
    {
        Node *nodeIterator = head;
        int positionIterator = 0;
        while (position - 2 != positionIterator)
        {
            nodeIterator = nodeIterator->next;
            positionIterator++;
        }
        toAdd->next = nodeIterator->next;
        nodeIterator->next = toAdd;
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
            while (iterator->next->next != nullptr)
                iterator = iterator->next;
            delete iterator->next;
            iterator->next = nullptr;
        }
        else if (position == 1)
        {
            Node *iterator = head;
            iterator->next = head;
            delete iterator;
        }
        else if (position > 1 && position < length)
        {
            Node *nodeIterator = head;
            int positionIterator = 0;
            while (position - 2 != positionIterator)
            {
                nodeIterator = nodeIterator->next;
                positionIterator++;
            }
            Node *toDelete = nodeIterator->next;
            nodeIterator->next = nodeIterator->next->next;
            delete toDelete;
        }
        length--;
    }
}

void LinkedList::print()
{
    Node *iterator = head;
    std::cout << "head -> ";
    while (iterator)
    {
        std::cout << iterator->data << " -> ";
        iterator = iterator->next;
    }
    std::cout << "nullptr\n";
    std::cout << "Tamaño: " << length << "\n";
}

std::ostream &operator<<(std::ostream &output, const LinkedList &o)
{
    Node *iterator = o.head;
    std::cout << "head -> ";
    while (iterator)
    {
        std::cout << iterator->data << " -> ";
        iterator = iterator->next;
    }
    std::cout << "nullptr\n";
    std::cout << "Tamaño: " << o.length << "\n";
}