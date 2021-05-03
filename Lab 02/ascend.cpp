#include <iostream>
using namespace std;

void show(int array[],int len)
{
    cout<<"[ ";
    for (int i=0;i<len;i+=1000)
        cout<<array[i]<<" ";
    cout<<"]\n";
}

void ascend_order( int array[], int len)
{
    for(int i=len;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if (array[j]>array[j+1])
                swap(array[j],array[j+1]);
        }
    }
}

int main()
{
    int len = 10000;
    int arr[len];
    for (int i=len;i>0;i--)
        arr[len-i]=i;
    show(arr,len);
    ascend_order(arr,len);
    show(arr,len);
}