#include<iostream>
using namespace  std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int binoCoeff(int n , int r){
    int y=fact(n);
    int z=fact(r);
    int t=fact(n-r);
    int b=y/(z*t);
    return b;
}
int main(){
    cout<<binoCoeff(4,2);
    return 0;
}