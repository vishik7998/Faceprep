#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
#include<iomanip>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;

int findLCM(int a, int b)
{
    int lar = max(a, b);
    int small = min(a, b);
    for (int i = lar; ; i += lar) {
        if (i % small == 0)
            return i;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout << "\nLCM of " << a << " and "
         << b << " is " << findLCM(a, b);
    return 0;
}
