#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if (( num%5==0)&&(num%11==0))
    {
        cout<<"Number is divisible by 5 and 11"<<endl;
    }
    else
    {
        cout<<"Number is not divisible"<<endl;
    }
}