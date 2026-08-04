#include<iostream>
using namespace std;
int main(){
    double p,r,t;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the Rate of Interest : ";
    cin>>r;
    cout<<"Enter The time in years : ";
    cin>>t;
    cout<<"The Simple Interest on the given Prioncipal amount is "<<((p*r*t)/100)<<endl;
    return 0;
}