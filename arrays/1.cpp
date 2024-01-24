#include"bits/stdc++.h"
using namespace std;
int main()
{
   int num;
   cout<<"Enter the limit of array"<<endl;
   cin>>num;
   int arr[num];
   for(int i=0;i<num;i++)
   {
    cin>>arr[i];
   }
   cout<<"Element of arrys are=";
   for(int i=0;i<num;i++)
   {
    cout<<" "<<arr[i];
   }

}