#ifndef NODE_HPP
#define NODE_HPP

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
    ~Node() = default;
};

#endif