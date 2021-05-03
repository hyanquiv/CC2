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

int Adder_R(const int array[],int len)
{
    if(len==0)
        return 0;
    return array[len-1] + Adder_R(array,--len);
}

int main()
{
    /*Debido a que estoy programando en una maquina virtual trabajar 
    con 1000000 de datos suele superar la memoria asignada a esta misma en el metodo recursivo*/
    int len = 100000;
    int arr[len];
    for (int i=0;i<len;i++)
        arr[i]=1;
    cout<<Adder_I(arr,len)<<endl;
    cout<<Adder_R(arr,len)<<endl;
   
}