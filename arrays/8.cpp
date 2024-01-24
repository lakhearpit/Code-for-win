#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num;
    cout<<"Enter the limit of array=";
    cin>>num;
    int arr[num];
    cout<<"Entet the element of array"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original array is "<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<'\t'<<arr[i];
    }
    cout<<"\nReverse array is "<<endl;
    
        int i=0;
        int j=num-1;
        while (i<j)
        {
           swap(arr[i],arr[j]);
           i++;
           j--;
        }
        for(int i=0;i<num;i++)
    {
        cout<<'\t'<<arr[i];
    }

   
}