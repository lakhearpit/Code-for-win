#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter the limit of array=";
    cin>>num;
    int arr[num];
    cout<<"Enter the element of array:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int mn=arr[0];
    for(int i=0;i<num;i++)
    {
        mn=min(mn,arr[i]);
    }
    cout<<"The smallest element is ="<<mn<<endl;
}