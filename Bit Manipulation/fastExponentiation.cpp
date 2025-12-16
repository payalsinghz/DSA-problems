#include<iostream>
using namespace std;

int fastExpo(int x, int num){
    int ans=1;
    while(num>0){
        if(num&1){
            ans=ans*x;
        }
        x=x*x;
        num=num>>1;
    } 
    return ans;
}

int main(){
    cout<<fastExpo(3,5);
}