

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char op;
    float num1, num2, result=0.0f;

    
    cout<<("WELCOME TO SIMPLE CALCULATOR\n")<<endl;
    cout<<("----------------------------\n")<<endl;
    cout<<("Enter [number 1] [+ - * /] [number 2]\n")<<endl;

    /* Input two number and operator from user */
    cin>>num1>> op>>num2;

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            cout<<("Invalid operator");
    }

    /* Prints the result */
    cout<<"Result="<<result;

    return 0;
}