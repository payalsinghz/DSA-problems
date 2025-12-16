#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[], int si, int ei){
   int i=si-1;
   int j=si;
   int pi=arr[ei];
   while(j<ei){
       if(arr[j]>pi){
            j++;
       }else{
            i++;
            swap(arr[i], arr[j]);
            j++;
       }
      
   }
    i++;
    swap(arr[i], arr[ei]);
   return i;
    
}
void quickSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int pi=partition(arr,si, ei );
    quickSort(arr,si,pi-1);
    quickSort(arr, pi+1, ei);
    
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={3,4,2,5,1};
    int n=5;
    quickSort(arr,0,n-1);
    print(arr,5);
}