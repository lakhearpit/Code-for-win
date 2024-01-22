#include"bits/stdc++.h"
using namespace std;
int main()
{
    int dim, area;
     float circum;
    int radi;

    cout<<"Enter radius of circle"<<endl;
    cin>>radi;
    dim=2*radi;
    area=3.14*(radi*radi);
    circum=2*(3.14)*radi;

    //using inbuit function
    // area= M_PI*pow(radi,2);


    cout<<"Diameter="<<dim<<"\tArea="<<area<<"\tCircumference="<<circum<<endl;
    
}