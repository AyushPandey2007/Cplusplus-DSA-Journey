#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    int i=1;
    do{                     // do while prints the statement once even if the condition is not true.
        cout<<i<<endl;
        i++;
    } while(i<=n);
    return 0;
}