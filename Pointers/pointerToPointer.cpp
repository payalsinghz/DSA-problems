#include<iostream>
using namespace std;
int main(){
    int a;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<ptr<<endl;
    cout<<pptr<<endl;
    cout<<sizeof(ptr);
    return 0;
}