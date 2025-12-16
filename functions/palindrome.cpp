#include<iostream>
using namespace std;
bool palindrome(int n){
    int rev=0;
    int original=n;
    while(n>0){
        int x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(rev==original){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<palindrome(323);
    return 0;
}