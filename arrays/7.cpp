#include"bits/stdc++.h"
using namespace std;
int main()
{
   int num;
  cout<<"Enter the limit of array=";
  cin>>num;
  int arr[num];
  int b[num];
  cout<<"Enter the element of array"<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
  }
  cout<<"Original array is"<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<'\t';
  }
  cout<<"\nArray in reverse order is"<<endl;
    for(int i=0;i<num;i++)
    {
       b[i]=arr[num-1-i];
    }
     for(int i=0;i<num;i++)
  {
    cout<<b[i]<<'\t';
  }
}