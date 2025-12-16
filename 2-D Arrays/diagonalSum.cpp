#include<iostream>
using namespace std;
void diagonalSum(int arr[][4], int n, int m){//O(n*n)
    int sum=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i==j)){
              sum+=arr[i][j];
            }else if((j==n-i-1)){
                sum+=arr[i][j];
            }
        }
     }
     cout<<sum;
}
void diagonalSum2(int arr[][4], int n, int m){//O(n)
    int sum=0;
     for(int i=0;i<n;i++){
            
              sum+=arr[i][i];
            if(i!=n-i-1){
               sum+=arr[i][n-i-1];
            }
            }
            cout<<sum;
        } 

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4; int m=4;
    diagonalSum2(arr, 4,4);
    return 0;
}