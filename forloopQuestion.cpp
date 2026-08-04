#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n= ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        // if(i==5){
        //     break;      This is a break statement.
        // }   
    } cout<<"Sum: "<<sum<<endl;
    cout<<"Done"<<endl;
    return 0;
}