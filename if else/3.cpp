#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character"<<endl;
    cin>>ch;
    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"It is vowel"<<endl;
    }
    else
    {
        cout<<"It is consonant"<<endl;
    }
}