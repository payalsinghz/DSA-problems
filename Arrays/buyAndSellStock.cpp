#include<iostream>
using namespace std;
int profit(int arr[], int n){
    int bestbuy[10000];
    int profit[10000];
    int max=0;
    bestbuy[0]=INT16_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]=min(arr[i-1],bestbuy[i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<bestbuy[i]<<" ";
    }cout<<endl;
    for(int i=0;i<n;i++){
        profit[i]=arr[i]-bestbuy[i];
        cout<<profit[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(profit[i]>max){
            max=profit[i];
        }
    }
    cout<<"Profit is :"<<max;
}
int main(){
int arr[]={5,3,2,1};
int n=sizeof(arr)/sizeof(int);
profit(arr,n);
}