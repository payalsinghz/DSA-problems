#include<iostream>
#include<string>
using namespace std;
void binaryStringProblem(int n, int lastplace, string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(!lastplace){
        binaryStringProblem(n-1, 0, ans+'0');
        binaryStringProblem(n-1, 1, ans+'1');
    }else{
        binaryStringProblem(n-1, 0, ans+'0');
    }
}
int main(){
    string ans="";
    binaryStringProblem(5, 0, ans);
    return 0;
}