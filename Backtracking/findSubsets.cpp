#include<iostream>
#include<string>
using namespace std;
void printSubsets(string str, string ans){
    if(str.size()==0){
        cout<<ans<<" ";
        return;
    }

    char ch=str[0];
    printSubsets(str.substr(1,str.size()-1), ans+ch);
    printSubsets(str.substr(1,str.size()-1), ans);

}
int main(){
    string str="abc";
    string ans="";
    printSubsets(str,ans);
}