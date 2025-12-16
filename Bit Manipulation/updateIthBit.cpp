#include<iostream>
using namespace std;
int UpdateithBit(int num, int i, int val){
    int mask=~(1<<i);
    num= (num & mask);
    num=num|(val<<i);
    cout<<num;
}
    
int main(){
    int num=6, i=1, val=0;
    UpdateithBit(num, i, val);
    return 0;
}