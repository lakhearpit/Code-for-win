#include"bits/stdc++.h"
using namespace std;
int main()
{
    int area, perimeter;
    int l,b;

    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;

    area=l*b;
    perimeter=2*(l*b);

    cout<<"Area="<<area<<"\tPerimeter="<<perimeter;
}