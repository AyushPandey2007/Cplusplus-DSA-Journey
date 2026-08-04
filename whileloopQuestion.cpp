#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1,sum=0;
    while(i<=n){
        sum+=i;
        i++;
    } cout<<"Sum: "<<sum<<endl;
    cout<<"Done"<<endl;
    return 0;

}