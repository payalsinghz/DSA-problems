#include<iostream>
using namespace std;
void normalVar(){
    int count =0;
    count++;
    cout<<count<<endl;
}
void staticVar(){
    static int count =0;
    count++;
    cout<<count<<endl;
}
int main(){
    normalVar();
    normalVar();
    normalVar();
    staticVar();
    staticVar();
    staticVar();
    return 0;
}