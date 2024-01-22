#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character"<<endl;
    cin>>ch;
    if((ch>=97 &&ch<=122) || (ch>=65 &&ch<=90))
    {
        cout<<"It is alphabet"<<endl;
    }
    else if (ch>=48 && ch<=57)
    {
        cout<<"It is digit"<<endl;
    }
    else
    {
        cout<<"It is special character"<<endl;
    }
    
}