#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="hiheeloooo";
   cout<<str.length()<<endl;
   cout<<str[2]<<"="<<str.at(2)<<endl;
   cout<<str.substr(1,5)<<endl;
   cout<<str.find("el");
    return 0;
}