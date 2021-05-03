//rep: https://github.com/hyanquiv/CC2
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

int str_len_R (const char *str)
{
    if (*str == '\0')
        return 0;
    return 1 + str_len_R(++str);
}

int main()
{
    const char *str1 = "Nyahello, World!!!";
    cout<< str1 << "Tiene "<<str_len_I(str1)<<" caracteres.\n";
    cout<< str1 << "Tiene "<<str_len_R(str1)<<" caracteres.\n";
}