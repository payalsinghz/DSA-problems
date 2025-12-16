#include<iostream>
using namespace std;
int search(int key,int arr[], int n){
    for(int i=0;i<n;i++){
         if(arr[i]==key){
            return i;
         }
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12};
    int key=10;
    int n=sizeof(arr)/sizeof(int);
   cout<<search(key,arr,n);
}