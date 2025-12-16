#include<iostream>
#include<list>
using namespace std;
void print(list<int> ll){
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<"->";
    }cout<<"NULL\n";
}
int main(){
    list<int> ll;
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    print(ll);
    ll.pop_back();
    print(ll);
    cout<<ll.size()<<endl;
    cout<<ll.front()<<endl;
    cout<<ll.back();
}