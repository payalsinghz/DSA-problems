#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fib0=0;
    int fib1=1;
    int f;
    for(int i=0;i<n;i++){
       f=fib0+fib1;
       cout<<f<<" ";
       fib0=fib1;

       fib1=f;
    }
    return 0;
}