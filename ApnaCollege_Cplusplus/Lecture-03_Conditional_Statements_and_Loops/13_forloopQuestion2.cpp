#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i+=2){
        sum += i;
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Done";
    return 0;
}
