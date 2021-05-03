#include <iostream>
using namespace std;

int str_len_I (char *str)
{
    int len=0;
    while(*str != '\0')
    {
        str++;
        len++;
    }
    return len;
}

void str_concat (char *str1,char *str2)
{
    int aux = str_len_I(str2);
    for(int i =str_len_I(str2);i<str_len_I(str2)+str_len_I(str1);i++)
        *(str2+i)=*(str1-aux+i);
}

int main()
{
    char *str1=new char [30];
    char *str2=new char [60];
    cout<<"input 1: ";
    cin.getline(str1,30);
    cout<<"input 2: ";
    cin.getline(str2,60);
    str_concat(str1,str2);
    cout<< str2 << endl;
}