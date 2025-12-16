#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int> arr,int target, int i){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOcc(arr, target , i+1);
}
int main(){
    vector<int> arr={1,2,3,3,4};
    cout<<firstOcc(arr,2,0)<<endl;
    return 0;
}