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
    ~Car(){
        cout<<"deleting obj\n";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};
int main(){
    Car c1("Maruti 800", "white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl; 
}