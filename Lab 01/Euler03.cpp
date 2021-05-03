#include <iostream>
using namespace std;

int main()
{
    long long int that = 600851475143;
    for (long long int i = 2; i < that; i++)
    {
        if (that % i == 0)
        {
            while (that % i == 0)
                that /= i;
        }
    }
    cout<<that<<"\n";
}
