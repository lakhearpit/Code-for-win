#include"bits/stdc++.h"
using namespace std;
int main()
{
    string st1,st2,st3;
    cout<<"Enter first string"<<endl;
    getline(cin,st1);
    cout<<"Enter second string"<<endl;
    getline(cin,st2);
    // st3=st1+" "+st2;
    // cout<<st3;

    st3=st1.append(st2);
    cout<<st3;

}