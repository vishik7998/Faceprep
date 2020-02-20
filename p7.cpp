#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before Swapping: ";
    cout<<a<<" "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swapping: ";
    cout<<a<<" "<<b;
    return 0;

}
