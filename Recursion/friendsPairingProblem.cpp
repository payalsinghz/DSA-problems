#include<iostream>
using namespace std;
int friendPairingProblem(int n){
    if(n==1||n==2){
        return n;
    }
    return (n-1)*friendPairingProblem(n-2)+friendPairingProblem(n-1);
}
int main(){
    cout<<friendPairingProblem(3);
    return 0;
}