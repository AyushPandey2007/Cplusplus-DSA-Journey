#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if(ch<=65 && ch>=90){
        cout<<"Uppercase letter";
    } else if(ch>=97 && ch<=122){
        cout<<"Lowercase letter";
    } else if(ch>=48 && ch<=57){
        cout<<"Digit";
    } else{
        cout<<"Special Character";
    }
    return 0;
}