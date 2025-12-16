#include<iostream>
#include<stack>
#include<string>

using namespace std;

string reverse(string str){
    string ans;
    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char ch=s.top();
        ans+=ch;
        s.pop();
    }
    return ans;
}
int main(){
    cout<<reverse("payal");
    return 0;
}