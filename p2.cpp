#include<iostream>
#include<conio.h>
#include<bits\stdc++.h>

using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int x = (int)ch;
    if((x>=65 && x<=90) || (x>=97 &&x<=122))
    {
        cout<<"It's an Alphabet";
    }
    else
        cout<<"It's not an Alphabet";
    return 0;
}
