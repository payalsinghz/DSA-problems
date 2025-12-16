#include<iostream>
using namespace std;
int search(int arr[], int si, int ei, int target){
    if(si>ei){
        return -1;
    }
    int mid=(si+ei)/2;
        if(arr[mid]==target){
        return mid;
    }
    if(arr[si]<=arr[mid]){
        if(arr[si]<=target&& target<=arr[mid]){
            return search(arr, si, mid-1, target);
        }else{
            return search(arr, mid+1, ei, target);
        }
    }else{
        if(arr[mid]<=target&& target<=arr[ei]){
            return search(arr, mid+1, ei, target);
        }else{
            return search(arr, si, mid-1, target);
        }
    }
    }

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int target=4;
    cout<<search(arr, 0, 6, 7);
}