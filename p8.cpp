#include<iostream>
#include<cstdio>
#include<conio.h>
#include<ctype.h>
#include<iomanip>
#define pi 3.14

using namespace std;

int main()
{
    float r;
    float area;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    area = pi*(r*r);
    cout<<"\nArea is :"<<setprecision(4)<<area;
    return 0;
}
