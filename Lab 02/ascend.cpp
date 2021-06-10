//rep: https://github.com/hyanquiv/CC2
#include <iostream>
using namespace std;

void myswap( int &x, int &y)
{
    int tmp=x;
    x=y;         
    y=tmp;
}

void show(int array[],int len)
{
    cout<<"[ ";
    for (int i=0;i<len;i+=100000)
        cout<<array[i]<<" ";
    cout<<"]\n";
}

int partition (int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            myswap(array[i], array[j]);
        }
    }
    myswap(array[i + 1], array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int index = partition(array, low, high);   
        quickSort(array, low, index - 1);
        quickSort(array, index + 1, high);
    }
}

int main()
{
    int len = 1000000;
    int arr[len];
    for (int i=len;i>0;i--)
        arr[len-i]=rand() % 100000;;
    show(arr,len);
    quickSort(arr,0,len-1);
    show(arr,len);
}