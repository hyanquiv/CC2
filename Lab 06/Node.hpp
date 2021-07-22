#ifndef NODE_HPP
#define NODE_HPP

template <typename T>
class Node
{
private:
    T data;
    Node *next;

public:
    Node(T data);
    ~Node() = default;
    T getData();
    void setNext(Node *);
    Node *getNext();
};

#endif