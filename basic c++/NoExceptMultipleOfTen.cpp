#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"You entered :"<<n;
        cout<<endl;
    }while(true);
    return 0;
}