#include<iostream>
using namespace std;
int ClearLastiBit(int num, int i){
    return (num&(~0<<i));
}
    
int main(){
    int num=15, i=2;
   cout<<ClearLastiBit(num, i);
    return 0;
}