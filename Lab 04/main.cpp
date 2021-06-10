#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main()
{
    LinkedList LL1;
    LL1.insert(1, 1);
    LL1.insert(2, 2);
    LL1.insert(3, 3);
    LL1.insert(4, 4);
    LL1.insert(10, 3);
    LL1.insert(30, 2);
    LL1.print();
    LL1.remove(3);
    LL1.remove(5);
    cout << LL1;
}