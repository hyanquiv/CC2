#include "Node.hpp"

Node::Node(int data)
{
    this->data = data;
    next = nullptr;
}

int Node::getData()
{
    return data;
}

void Node::setNext(Node *n)
{
    next = n;
}

Node *Node::getNext()
{
    return next;
}