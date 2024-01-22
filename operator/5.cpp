#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an character"<<endl;
    cin>>ch;
    if(ch>='a' &&ch<='z' || ch>='A' &&ch<='Z')
    {
        cout<<"It is an alpabet"<<endl;

    }
    else
    {
        cout<<"It is not an alphabet"<<endl;
    }
}