#include"bits/stdc++.h"
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if(year%4==0 && year%100 !=0)
    {
        cout<<"It is a leap year, but not a century year"<<endl;
    }
    else if (year%4==0 && year%100 ==0)
    {
       cout<<"It is leap year and a century year"<<endl;

    }
    else
    {
       cout<<"It is not a leap year"<<endl;
    }
    
    
}