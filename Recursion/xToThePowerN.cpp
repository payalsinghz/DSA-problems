#include<iostream>
using namespace std;
int power(int x,int n){                       //O(n)
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int power2(int x,int n){                       //O(log(n))
    if(n==0){
        return 1;
    }
    if(n%2!=0){
        return x*power(x,n/2)*power(x,n/2);
    }else{
         return power(x,n/2)*power(x,n/2);
    }
}
int main(){
    cout<<power2(5,3);
    return 0;
}