#include<iostream>
using namespace std;
bool sorted(int arr[],int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return sorted(arr, n , i+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int arr2[]={1,3,2,4,5};
    cout<<sorted(arr,5,0)<<endl;
    cout<<sorted(arr2,5,0)<<endl;
    return 0;
}