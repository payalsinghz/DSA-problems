#include<iostream>
#include<string>
using namespace std;
class A{
    string secret="secret data";
    friend void revealSecret(A &obj);
};
void revealSecret(A &obj){
    cout<<obj.secret;
}
int main(){
    A a1;
    revealSecret(a1);
  
}