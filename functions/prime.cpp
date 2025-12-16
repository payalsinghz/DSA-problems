#include<iostream>
using namespace std;
bool prime(int n){
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }}
        if(isPrime){
            return true;
        }
        else{
            return false;
        }
    
}
int main(){
    cout<<prime(9);
    return 0;
}