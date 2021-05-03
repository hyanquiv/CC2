#include <iostream>
using namespace std;
int str_len_I (const char *str)
{
    int len=0;
    while(*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}

bool is_greater_than (const char *str1,const char *str2)
{
    int min=0;
    if(str_len_I(str1)<str_len_I(str2))
        min = str_len_I(str1);
    else
        min = str_len_I(str2);
    for(int i=0;i<min;i++)
    {
        if(*str1 > *str2)
        {
            return true;
        }
        str1++;
        str2++;
    }
    return false;
}

void show(char *array[],int len)
{
    cout<<"[ ";
    for (int i=0;i<len;i+=1000)
        cout<<array[i]<<" ";
    cout<<"]\n";
}

void lexi_order(const char *array[], int len)
{
    for(int i=len;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if (is_greater_than(array[j],array[j+1]))
                swap(array[j],array[j+1]);
        }
    }
}

int main()
{
    int len = 4;
    char *arr[len]={"bab","ba","aaa","ca","aaaa"};
    show(arr,len);
    lexi_order(arr,len);
    show(arr,len);
}