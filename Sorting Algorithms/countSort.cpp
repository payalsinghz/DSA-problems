#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countSort(int arr[], int n){
    int freq[100]={0};
    int minV=INT16_MAX;
    int maxV=INT16_MIN;
    for(int i=0;i<n;i++){
       minV= min(minV, arr[i]);
       maxV= max(maxV, arr[i]);
       freq[arr[i]]++;
    }
    for(int i=minV, j=0;i<=maxV;i++){
        while(freq[i]>0){
        arr[j++]=i;
        freq[i]--;
    }
    }
    
    print(arr,n);
}
int main(){
    int arr[]={5,4,1,3,2};
    countSort(arr,5);
}
