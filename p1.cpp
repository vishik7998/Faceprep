#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

void vowel_or_consonant(char ch)
{
    if(isdigit(ch)!= 1)
    {
         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        cout << "Vowel"<< endl;
    else
        cout << "Consonant" << endl;
    }
    else
    {
        cout<<"Number";
    }
}

int main()
{
    char ch;
    cout << "\nInput a character :";
    cin >> ch;
    vowel_or_consonant(ch);
    return 0;
}
