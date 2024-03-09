#include"bits/stdc++.h"
using namespace std;
int main()
{
     string st;
    cout<<"Enter any string\n";
    getline(cin,st);
    int count=0;
    while(st[count] !='\0')
    {
        count++;
    }
    cout<<count;
}
