#include<iostream>
#include<string>
using namespace std;
class Car{
public:
    string name;
    string color;
    int* mileage;
    Car(string name, string color){
        this->name=name;
        this->color=color;
        mileage= new int;
        *mileage=12;
    }
    Car(Car &original){               // custom is req for deep copy as by default shallow copy is made
        name=original.name;
        color=original.color;
        cout<<"Custom is called"<<endl;
        mileage = new int;
        *mileage = *original.mileage;
    }
};
int main(){
    Car c1("Maruti 800", "white");
    Car c2(c1);
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage; //c1 and c2 do not point to the same memory 
}