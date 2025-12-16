#include<iostream>
#include<cmath>
using namespace std;
int binToDec(int n){
    int dec=0;
 for(int i=0;n>0;i++){
     int lastDig= n%10;
     dec= dec+lastDig*pow(2,i);
     n=n/10;
 }
 return dec;
}
int main(){
    cout<<binToDec(111);
return 0;
}