
//rep: https://github.com/hyanquiv/CC2

#include <iostream>
using namespace std;

int Adder_I(const int array[],int len)
{
    int adder=0;
    for(int i=0;i<len;i++)
        adder+=array[i];
    return adder;
}

int Adder_RTail(const int array[],int len,int counter = 0)
{
    if(len==0)
        return counter;
    return Adder_RTail(array,len-1,counter+array[len-1]);
}

int main()
{
    int len = 1000000;
    int arr[len];
    for (int i=0;i<len;i++)
        arr[i]=1;
    cout<<Adder_I(arr,len)<<endl;
    cout<<Adder_RTail(arr,len)<<endl;
}