#include <iostream>
using namespace std;

bool isPrime(int that)
{
    bool truth = true;
    for (int i = 2; i < that; i++)
    {
        if (that % i == 0)
        {
            truth = false;
            break;
        }
    }
    return truth;
}

int main()
{
    int nPrime = 0;
    int actualNumber = 2;
    while (nPrime != 10001)
    {
        if (isPrime(actualNumber))
            nPrime++;
        actualNumber++;
    }
    cout << actualNumber - 1 << "\n";
}
