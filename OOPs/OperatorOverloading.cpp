#include<iostream>
#include<string>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r, int i){
        this->real=r;
        this->img=i;
    }
    void showNum(){
        cout<<real<<"+"<<img<<"i\n";
    }
    void operator + (Complex &c2){
        int resreal=this->real+c2.real;
        int resimg=this->img+c2.img;
        Complex c3(resreal, resimg);
        c3.showNum();
    }
};
int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.showNum();
    c2.showNum();
    c1+c2;
}