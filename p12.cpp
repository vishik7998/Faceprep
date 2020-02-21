#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
#include<iomanip>
#include<cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,q,i=0;
    cout<<"Enter number: ";
    cin>>a;
    while(q!=0)
    {
        q=a/10;
        a=q;
        i=i+1;
    }
    cout<<"\nNumber of digits are: "<<i;
    return 0;
}
