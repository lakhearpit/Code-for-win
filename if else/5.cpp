#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"It is lowercase character"<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
       cout<<"It is uppercase character"<<endl;
    }
    else
    {
        cout<<"Please enter a valid character"<<endl;
    }
    
}