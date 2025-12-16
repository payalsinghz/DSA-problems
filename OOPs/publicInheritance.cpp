#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"eat\n";

    }
    void breathe(){
        cout<<"breathe\n";
    }
};
class Fish: public Animal{
    public:
    int fins;
    void swim(){
        cout<<"swim\n";
    }
};
int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins;
    f1.swim();
    f1.breathe();

}