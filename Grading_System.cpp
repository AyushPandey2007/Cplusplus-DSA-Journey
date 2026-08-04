#include<iostream>
using namespace std;
int main(){
    int Marks;
    cout<<"Enter Your Marks "<<endl;
    cin>>Marks;
    if(Marks>=90){
        cout<<"Grade A"<<endl;
    } else if(Marks>=80 && Marks<90){
        cout<<"Grade B"<<endl;
    } else{
        cout<<"Grade C"<<endl;
    } return 0;
    }
    
