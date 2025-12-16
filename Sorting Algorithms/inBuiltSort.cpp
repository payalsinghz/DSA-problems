#include<iostream>
#include <algorithm>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,4,1,3,2};
    sort(arr,arr+5);//ascending
    print(arr,5);
    cout<<endl;
    sort(arr,arr+5, greater<int>());//descending
    print(arr,5);
}
