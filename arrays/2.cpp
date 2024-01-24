#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the limit of array=";
    cin>>num;
    int arr[num];
     cout<<"Enter the element of array:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
   
    for(int i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Summation of all the element in an array is="<<sum;
}