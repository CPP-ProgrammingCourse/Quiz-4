#include<iostream>
using namespace std;


void MA(double *ptra ,double *ptrb )
{
    *ptra = 3.14*(*ptra * *ptrb);
}
int main ()
{
    double a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    MA(&a,&b);
    cout<<"Area: "<< a << endl;
}