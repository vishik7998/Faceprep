#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
#include<iomanip>
#include<cmath>
#include <bits/stdc++.h>

using namespace std;
void gcd(int p, int q)
{
    int rem, quo;
    if(p>q)
    {
        while(rem!=0)
        {
            quo=p/q;
            rem=p%q;
            p=q;
            q=rem;
        }
        cout<<"\nGCD is  "<<q;
    }
    else
    {
        while(rem!=0)
        {
            quo=q/p;
            rem=q%p;
            q=p;
            p=rem;
        }
        cout<<"\nGCD is  "<<q;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
