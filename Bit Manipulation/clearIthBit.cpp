#include<iostream>
using namespace std;
int clearithBit(int num, int i){
    int mask=~(1<<i);
    return (num & mask);
}
    
int main(){
    int num=6, i=1;
    cout<<clearithBit(num, i);
    return 0;
}