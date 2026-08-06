#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<"The Factorial of the given Number is: "<<fac<<endl;
    return 0;
}