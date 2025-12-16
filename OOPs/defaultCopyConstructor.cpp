#include<iostream>
#include<string>
using namespace std;
class Car{
public:
    string name;
    string color;
    Car(string name, string color){
        this->name=name;
        this->color=color;
    }
};
int main(){
    Car c1("Maruti 800", "white");
    Car c2(c1);
    cout<<c2.name;
}