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
class Mammal: public Animal{
    public:
    string bloodtype;
    Mammal(){
        bloodtype="warm";
    }
};
class Dog: public Mammal{
    public:
    void tailwag(){
        cout<<"tail wag\n";
    }
};
int main(){
    Dog d1;
    d1.breathe();
    d1.eat();
    d1.tailwag();
    cout<<d1.bloodtype;
}