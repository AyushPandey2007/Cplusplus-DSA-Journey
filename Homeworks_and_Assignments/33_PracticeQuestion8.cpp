#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int  sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    } cout<<"Sum: "<<sum<<endl;
    cout<<"Done";
    return 0;
}