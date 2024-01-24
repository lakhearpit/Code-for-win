#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter the limit of array=";
    cin>>num;
    int arr[num];
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<num;i++)
    {
    cin>>arr[i];
    }
    int mx=arr[0];
    for(int i=0;i<num;i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<'\n'<<"The max element is="<<mx;

}