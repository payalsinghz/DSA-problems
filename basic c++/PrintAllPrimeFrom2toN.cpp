#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        bool prime=true; //resets prime = true for each i
        for(int j=2 ; j<i; j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<i<<" ";
        }
    }
    return 0;
}