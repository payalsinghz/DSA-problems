#include<iostream>
#include<deque>
using namespace std;
class stack{
    deque<int>deq;
public:
    void push(int val){
        deq.push_back(val);
    }
    void pop(){
        deq.pop_back();
    }
    int front(){
        return deq.back();
    }
    bool empty(){
        return deq.empty();
    }
};
int main(){
    stack q;
    q.push(3);
    q.push(2);
    q.push(1);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    return 0;
}