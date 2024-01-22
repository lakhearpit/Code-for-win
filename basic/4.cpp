#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;

    int add= num1+num2;
    cout<<"Addition="<<add<<endl;;

    int sub= num1-num2;
    cout<<"Difference="<<sub<<endl;;

    int mul= num1*num2;
    cout<<"Product="<<mul<<endl;;

    int div= num1/num2;
    cout<<"Quotient="<<div<<endl;;

    int mod= num1%num2;
    cout<<"Modulus="<<mod<<endl;

    return 0;
}