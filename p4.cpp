#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"Upper case";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"Lower case";
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"Number";
    }
    else
        cout<<"Symbol";
    return 0;
}
