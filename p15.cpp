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
    int a,b,sum=0;
    cout<<"Enter start and end range: ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        sum = sum+i;
    }
    cout<<"The sum between range "<<a<<" and "<<b<<" is "<<sum;
    return 0;
}
