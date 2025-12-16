#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int x=n%10;
        sum+=x;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<sumOfDigits(323);
    return 0;
}