#include"bits/stdc++.h"
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"First number is greater i.e. "<<num1<<endl;
    }
    else if (num1<num2)
    {
       cout<<"Second number is greater i.e. "<<num2<<endl; 
    }
    else
    {
        cout<<"Both numbers are equal"<<endl;
    }
    
    
}