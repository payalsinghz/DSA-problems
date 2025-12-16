#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int copy[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copy[i]=arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i]=copy[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}