#include<iostream>
using namespace std;
bool powerOf2(int num){
    if(!(num&(num-1))){
        return true;
    }return false;
}
int main(){
    cout<<powerOf2(8)<<endl;
    cout<<powerOf2(9)<<endl;
    return 0;
}