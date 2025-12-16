#include<iostream>
#include<string>
using namespace std;
class Print{
    public:
    void showNum(int x){
        cout<<"int "<<x<<endl;
    }
    void showNum(string str){
        cout<<"string "<<str<<endl;
    }
};
int main(){
    Print p1;
    p1.showNum(25);
    p1.showNum("hii");
    
}