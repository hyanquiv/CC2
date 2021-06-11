#ifndef NODE_HPP
#define NODE_HPP

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data);
    ~Node() = default;
    int getData();
    void setNext(Node *);
    Node *getNext();
};

#endif