#include <iostream>
using namespace std;

bool checkAll ( int * a )
{
    bool truth = true;
    for (int i=0;i<20;i++)
    {
        if (a[0]!=a[i])
        {
            truth=false;
            break;
        }
    }
    return truth;
}

int main()
{
    bool eureka = false;
    int *checkList = new int [20];
    int actualOne = 1;
    while (not eureka)
    {
        for (int i = 1; i < 21; i++)
        {
            if (actualOne % i == 0)
                checkList[i - 1] = 1;
            else
                checkList[i - 1] = 0;
        }
        if (checkAll(checkList))
            eureka = true;
        else
            actualOne++;
    }
    cout << actualOne << "\n";
}
