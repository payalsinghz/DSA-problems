#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    //with the help of dereference operator we can modify the value also
    *ptr=20;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}