#include <iostream>
using namespace std;

void show(int array[],int len)
{
    cout<<"[ ";
    for (int i=0;i<len;i+=10000)
        cout<<array[i]<<" ";
    cout<<"]\n";
}

void Twist_I(int array[],int len)
{
    for (int i = 0; i < len/2; i++)
        swap(array[i],array[len-1-i]);
}

void Twist_R(int array[],int start,int end)
{
    if(start<end--)
    {
        swap(array[start],array[end]);
        Twist_R(array,++start,end);
    }
}

int main()
{
    int len = 100000;
    int arr[len];
    for (int i=0;i<len;i++)
        arr[i]=i;
    show(arr,len);
    Twist_I(arr,len);
    show(arr,len);
    Twist_R(arr,0,len);
    show(arr,len);
}