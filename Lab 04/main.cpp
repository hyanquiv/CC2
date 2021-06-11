#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main()
{
    LinkedList LL1;
    LL1.insert(10);
    cout << LL1;
    LL1.insert(20);
    cout << LL1;
    LL1.insert(15);
    cout << LL1;
    LL1.insert(13);
    cout << LL1;
    LL1.insert(12);
    cout << LL1;
    LL1.remove(3);
    cout << LL1;
    LL1.remove(4);
    cout << LL1;
}