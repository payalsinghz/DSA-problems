#include<iostream>
using namespace std;
class Ex{
    public:
    int x=0;
};
class Exl{
    public:
    static int x;
};
int Exl::x=0;
int main(){
    Ex e1;
    Ex e2;
    Ex e3;
    cout<<e1.x++<<endl;
    cout<<e2.x++<<endl;
    cout<<e3.x++<<endl;
    Exl e11;
    Exl e22;
    Exl e33;
    cout<<e11.x++<<endl;
    cout<<e22.x++<<endl;
    cout<<e33.x++<<endl;
}