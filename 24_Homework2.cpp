#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a Character "<<endl;
    cin>>character;
    if(character>= 65 && character<=90){
        cout<<"Uppercase character"<<endl;
    } else if(character>=97 && character<=122){
        cout<<"Lowercase character"<<endl;
    } else{
        cout<<"Not an alphabet"<<endl;
    } return 0;
}
