#include"bits/stdc++.h"
using namespace std;
int main()
{
    float num1,num2,num3;
    cout<<"Enter three number"<<endl;
    cin>>num1>>num2>>num3;
   
     if(num1>num2 && num1>num3)
    {
        cout<<"First number is greater i.e. "<<num1<<endl;
    }
    else if (num3<num2)
    {
       cout<<"Second number is greater i.e. "<<num2<<endl; 
    }
    // else if (num1=num2=num3)
    // {
    //    cout<<"Both number are equal"<<endl;
   // }
    else 
    {
        cout<<"Third number is greatest i.e."<<num3<<endl;
    }
    
    
}