#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool duplicate(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch!=')'){
            s.push(ch);
        }else{
            if(s.top()=='('){
                return true;
            }
            while(s.top()!='('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main(){
    string str1="(a+b)";
    string str2="((a+b))";
    cout<<duplicate(str1)<<endl;
    cout<<duplicate(str2)<<endl;
    return 0;
}