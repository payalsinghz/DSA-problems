#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
//Different parameters but same name
double sum(double a,double b){
    return a+b;
}
//different no of parameters but same name
int sum(int a, int b, int c){
    return a+b+c;
}
int main(){
cout<<sum(2,3)<<endl;
cout<<sum(2.5,1.5)<<endl;
cout<<sum(2,3,4)<<endl;
return 0;
}