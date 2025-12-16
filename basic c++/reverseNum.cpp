#include<iostream>
using namespace  std;
int main(){
    int n=10829;
    int res=0;
    while(n>0){
        int lastDigit=n%10;
        res=res*10+lastDigit;
        n=n/10;
    }
    cout<<res;
    return 0;
}