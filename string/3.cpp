#include"bits/stdc++.h"
using namespace std;
int main()
{
    string st1,st2;
    int i;
    cout<<"Enter the original string\n";
    getline(cin,st1);
    // for( i=0;st1[i]!='\0';i++)
    // {
    //     st2[i]=st1[i];  
    // }
    // st2[i]='\0';
    st2=string(st1);
    cout<<"Original string:"<<st1<<endl;
    cout<<"Copied string:"<<st2<<endl;
}