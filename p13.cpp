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
    int a,q,sum=0;
    cout<<"Enter number: ";
    cin>>a;
    while(a!=0)
    {
        q=a%10;
        sum=sum+q;
        a=a/10;
    }
    cout<<"Sum is : "<<sum;
    return 0;

}
