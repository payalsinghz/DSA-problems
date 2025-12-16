#include<iostream>
using namespace std;
int main(){
    int x=5;
    int y=10;
    int *ptr1=&x;
    int *ptr2=&y;
    cout<<ptr2<<endl;
    cout<<ptr1<<endl;
    ptr2=ptr1;
    cout<<ptr2<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr2<<endl;
    cout<<*ptr1<<endl;
    return 0;
}