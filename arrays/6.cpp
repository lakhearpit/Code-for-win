#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter limit of array=";
    cin>>num;
    int arr[num];
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int mx=arr[0];
    int smx=0;
    for (int i=0;i<num;i++)
    {
        mx=max(mx,arr[i]);
    }
    for(int i=0;i<num;i++)
    {
        if(smx<arr[i]&& mx!=arr[i])
        {
            smx=arr[i];

        }
    }
    cout<<"Second max="<<smx;
}