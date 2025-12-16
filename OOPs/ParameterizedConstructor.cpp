#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    float cpi;
public:
    Student(string name, float cpi){
        cout<<"Constructor with parameters\n";
        this->name=name;
        this->cpi=cpi;
    }

    void getPercentage(){
        cout<<cpi*10<<endl;
    }
    //Setters
    void setName(string nameVal){
        name=nameVal;
    }
    void setCpi(float cpiVal){
        cpi=cpiVal;
    }
    //Getters
    string getName(){
        return name;
    }
    float getcpi(){
        return cpi;
    }
};
int main(){
    Student s1("Payal", 8.88);
    return 0;
}