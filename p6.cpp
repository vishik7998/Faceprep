#include<iostream>
#include<conio.h>
#include<ctype.h>
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
    int ch;
    cin>>ch;
    if (ch == 0)
    {
        cout<<"Zero";
    }
    else if(ch%2==0)
    {
        cout<<"Even";
    }
    else
        cout<<"Odd";
    return 0;
}
