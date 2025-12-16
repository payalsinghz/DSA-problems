#include<iostream>
using namespace std;
void func(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    func();
    // cout<<arr[2];      //this will give error due to static allocation of memory as the array gets deleted when the control comes back to main func
    return 0;
}