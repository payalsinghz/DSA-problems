#include<iostream>
using namespace std;
void getithBit(int num, int i){
    if(!(num&(1<<i))){
        cout<<"ith bit is 0";
    }else{
        cout<<"ith bit is 1";
    }
}
int main(){
    int num=6, i=2;
    getithBit(num, i);
    return 0;
}