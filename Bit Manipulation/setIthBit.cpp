#include<iostream>
using namespace std;
void setithBit(int num, int i){
    if(!(num&(1<<i))){
        num=num|(1<<i);
    }
    cout<<num;
}
int main(){
    int num=6, i=3;
    setithBit(num, i);
    return 0;
}