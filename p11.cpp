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
    //greatest of 2 numbers
    int a,b,c,p,q,r,t;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=(a>b)?a:b;
    cout<<"\nGreatest is "<<c;

    //greatest of 3 numbers
    cout<<"\nEnter numbers: ";
    cin>>p>>q>>r;
    t=(p>q)?((p>r)?p:r):((q>r)?q:r);
    cout<<"\nGreatest is "<<t;
    return 0;
}
