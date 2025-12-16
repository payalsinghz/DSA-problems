#include<iostream>
using namespace std;
//dont use ^ symbol bcz this is not square symbol its bitwise xor
int wholeSq(int a,int b){
    return a*a+b*b+2*a*b;
}
int main(){
    cout<<wholeSq(3,5);
    return 0;
}