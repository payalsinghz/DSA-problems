#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                }
            }
         swap(arr[i],arr[min]);
    }
    print(arr,n);
}
int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
}
