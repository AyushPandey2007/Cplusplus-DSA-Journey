#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int sum=0;
    
    while(n>0){
        int lastDigit=n%10;
        sum+=lastDigit;
        n/=10;
        
    } cout<<"Sum of the Digits: "<<sum<<endl;
    cout<<"Done";
    return 0;
}