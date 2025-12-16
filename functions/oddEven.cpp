#include<iostream>
using namespace std;
bool checkEven(int a){
    if(a%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
   cout<<checkEven(4);
   return 0;
}