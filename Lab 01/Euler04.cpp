#include <iostream>
using namespace std;
int paliCheck(int that)
{
    int thatR = 0, remainder = 0;
    while (that != 0)
    {
        remainder = that % 10;
        thatR = thatR * 10 + remainder;
        that /= 10;
    }
    return thatR;
}
int main()
{
    int max = 0;
    for (int i = 999; i > 99; i--)
    {
        for (int j = 999; j > 99; j--)
        {
            if (i * j == paliCheck(i * j))
            {
                if (i * j > max)
                {
                    max = i * j;
                }
            }
        }
    }
    cout << max << "\n";
}
