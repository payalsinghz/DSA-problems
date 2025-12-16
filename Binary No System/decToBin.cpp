#include<iostream>
#include<cmath>
using namespace std;
int decToBin(int n){
    int bin=0;
    int pow=1;
    for(int i=0;n>0;i++){
        int lastDig=n%2;
        bin+= lastDig*pow;
        n=n/2;
        pow*=10;
}
return bin;
}
int main(){
    cout<<decToBin(18);
    return 0;
}