#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,3,4,5};
    cout<<"size :"<<vec1.size()<<endl;
    cout<<"Capacity: "<<vec1.capacity()<<endl;
    vec1.push_back(6);
    cout<<"size :"<<vec1.size()<<endl;
    cout<<"Capacity: "<<vec1.capacity()<<endl;
    vec1.pop_back();
    cout<<"size :"<<vec1.size()<<endl;//size will change while doing pop , capacity remains same
    cout<<"Capacity: "<<vec1.capacity()<<endl;
}