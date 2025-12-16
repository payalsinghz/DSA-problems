#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int y=n;
    while(n>0){
       int x=n%10;
       sum+=x*x*x;
       n=n/10;
     }
     if(sum==y){
        cout<<"Yes";
     }
     else{
        cout<<"No";
     }
     return 0;
}