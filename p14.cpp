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
    int num,sum=0;
    cout<<"Enter number :";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        sum = sum+i;
    }
    cout<<"The sum is: "<<sum;
    return 0;
}
