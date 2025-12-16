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
};
int main(){
    Student s1;
    cout<<sizeof(s1);
    return 0;
}