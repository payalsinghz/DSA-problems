#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    float cpi;
public:
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
    cout<<sizeof(s1)<<endl;
    s1.setName("Payal");
    s1.setCpi(8.66);
    cout<<s1.getcpi()<<endl;
    s1.getPercentage();
    return 0;
}