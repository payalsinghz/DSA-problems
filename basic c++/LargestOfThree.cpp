#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    cout<<"Enter the value of c :"<<endl;
    cin>>c;
    if(a>b&&a>c){
        cout<<"greater is :"<<a;
    }
    else if(b>a&&b>c){
        cout<<"greater is :"<<b;
    }else{
        cout<<"greater is :"<<c;
    }

}