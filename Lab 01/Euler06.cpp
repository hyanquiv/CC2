#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int sumSquares = 0, squareSum = 0;
    for (int i = 1; i < 101; i++)
    {
        sumSquares += pow(i, 2);
        squareSum += i;
    }
    squareSum = pow(squareSum, 2);
    cout << squareSum - sumSquares << "\n";
}
