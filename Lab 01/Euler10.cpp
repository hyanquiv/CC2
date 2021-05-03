#include <iostream>
using namespace std;

bool isPrime(int that)
{
    bool truth = true;
    for (int i = 2; i < that/3; i++)
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
    long adder = 0;
    for (int i = 2000000; i > 1; i--)
    {
        if (isPrime(i))
            adder += i;
    }
    cout << adder << "\n";
}
