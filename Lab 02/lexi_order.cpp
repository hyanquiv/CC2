//rep: https://github.com/hyanquiv/CC2
#include <iostream>
using namespace std;

void myswap( string &x, string &y)
{
    string tmp=x;
    x=y;         
    y=tmp;
}

int main()
{
    string str[10], temp;

    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i)
        getline(cin, str[i]);

    for(int i = 0; i < 9; ++i)
        for( int j = i+1; j < 10; ++j)
            if(str[i] > str[j])
            myswap(str[i],str[j]);

    cout << "In lexicographical order: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}