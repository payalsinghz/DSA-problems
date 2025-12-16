#include<iostream>
using namespace std;
void search(int arr[][4], int n, int m, int key){
    int j=m-1;
    int i=0;
    while(i<n && j>=0){
         if(arr[i][j]==key){
            cout<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
            return;
         }else if(arr[i][j]>key){
            j--;
         }else{
            i++;
         }
    }
    cout<<"Not found";
}

int main(){
    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(arr, 4, 4, 33);
}