#include<iostream>
using namespace std;
int binSearch(int arr[], int key,int n){
    int st=0;
    int en=n-1;
   
    while(st<=en){
         int mid=(st+en)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else if(arr[mid]>key){
           en=mid-1;
    
        }
        }

return -1;
    }

int main(){
    int arr[]={2,4,6,8,1-0,12,14};
    int n=sizeof(arr)/sizeof(int);
    cout<<binSearch(arr,12,8);
    
}