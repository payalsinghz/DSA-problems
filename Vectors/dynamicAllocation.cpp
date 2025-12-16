#include<iostream>
using namespace std;
void func(){
    int size;
    cin>>size;
    int *arr= new int[size];
    int x=1;
    for(int i=0;i<size;i++){
        arr[i]=x;
        cout<<arr[i]<<" ";
        x++;
    }cout<<endl;
    delete [] arr;//to avoid memory leak we delete the array pointer named arr 
}
void func2(){
    int x;
    cin>>x;
    int *ptr= new int[x];
    *ptr=5;
    cout<<*ptr;
    delete ptr;// to avoid memory leak we delete the int pointer named ptr
}

int main(){
   func();
//    func2();
   return 0;
}



