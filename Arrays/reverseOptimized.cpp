#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    int j=n-i-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}