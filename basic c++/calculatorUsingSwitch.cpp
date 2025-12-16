#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    char op;
    cout<<"Enter operator";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"sum ="<<a+b<<endl;
        break;
    case '-':
        cout<<"diff ="<<a-b<<endl;
        break;
    case '*' :
        cout<<"prod ="<<a*b<<endl;
        break;
    case '/' :
        cout<<"div ="<<a/b<<endl;
        break;
    default:
    cout<<"invalid"<<endl;
        break;
    }
    return 0;
}