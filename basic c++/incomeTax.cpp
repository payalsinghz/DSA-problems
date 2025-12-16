#include<iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter income in lakhs :"<<endl;
    cin>>income;
    if(income<5){
        cout<<"Tax = 0"<<endl;
    }else if(income<10){
        cout<<"Tax = "<<float(20*income)/100;
    }
    else {
        cout<<"Tax = "<<float(30*income)/100;
        return 0;
    }
}