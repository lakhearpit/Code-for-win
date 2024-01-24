#include"bits/stdc++.h"
using namespace std;
int main()
{
    int num, x,i;
    cout<<"Enter an limit of array=";
    cin>>num;
    int arr[num];
    cout<<"Enter the elements of array ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find=";
    cin>>x;
       bool found=false;
       for(int i=0;i<num;i++)
       {
        if(x==arr[i])
        {
            cout<<"Element found"<<endl;
            found=true;
        }

       }

    if(!found)
    {
        cout<<"No such element exit"<<endl;
    }
}