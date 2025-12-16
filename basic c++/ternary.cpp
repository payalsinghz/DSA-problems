#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a;
    cin>>b;
    int max = a>b ? a:b;
    cout<<max;
    return 0;
}