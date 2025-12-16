#include<iostream>
using namespace std;
int main(){
    int n;
   
    do{
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"you entered:"<<n;
    }while(true);
    return 0;

}