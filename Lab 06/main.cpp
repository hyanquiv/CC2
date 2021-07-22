#include <iostream>
#include <vector>
#include "LinkedList.cpp"
using namespace std;

int main()
{
    LinkedList<int> LL1;
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
    LL1.insert(25);
    cout << LL1;
    LL1.insert(8);
    cout << LL1;

    cout << "Impresion utilizando el iterador" << endl;
    for (Iterator<int> iterator = LL1.begin();
         iterator != LL1.end(); iterator++)
    {
        cout << *iterator << " ";
    }

    cout << endl;

    return 0;
}