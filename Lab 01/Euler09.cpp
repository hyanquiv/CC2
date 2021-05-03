#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool eureka = false;
    while (not eureka)
    {
        for (int a = 0; a < 666; a++)
        {
            for (int b = 0; b < 666; b++)
            {
                for (int c = 0; c < 666; c++)
                {
                    if (a + b + c == 1000 && pow(a, 2) + pow(b, 2) == pow(c, 2) && a < b && b < c)
                    {
                        eureka = true;
                        cout << a * b * c << "\n";
                    }
                }
            }
        }
    }
}
