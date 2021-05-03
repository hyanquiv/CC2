#include <iostream>
using namespace std;
int main()
{
    int fibo1 = 1, fibo2 = 1, fibo3 = 0, adder = 0;
    while (fibo3 < 4000000)
    {
        fibo3 = fibo1 + fibo2;
        if (fibo3 % 2 == 0)
            adder += fibo3;
        fibo1 = fibo2;
        fibo2 = fibo3;
    }
    cout << adder << "\n";
}
