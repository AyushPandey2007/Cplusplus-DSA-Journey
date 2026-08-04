#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"Grade A";
    } else if(marks>=80 && marks<90){
        cout<<"Grade B";
    } else if(marks>=70 && marks<80){
        cout<<"Grade C";
    } else if(marks>100){
        cout<<"Wrong marks Entered";
    } else if(marks<70){
        cout<<"Fail";
    } return 0;
    }
    