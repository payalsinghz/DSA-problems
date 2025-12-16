#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    float cpi;
public:
    Student(){
        cout<<"Constructor without parameters\n";
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
    Student s1;
    return 0;
}