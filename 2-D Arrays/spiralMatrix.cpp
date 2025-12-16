#include<iostream>
using namespace std;
int main(){
int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int sRow=0;
int sCol=0;
int n=4;
int m=4;
int eRow=n-1;
int eCol=m-1;
while(sRow<= eRow && sCol<=eCol){
    for(int j=sCol;j<=eCol;j++){
        cout<<arr[sRow][j]<<" ";
    }
    for(int i=sRow+1;i<=eRow;i++){
        cout<<arr[i][eCol]<<" ";
    }
    for(int j=eCol-1;j>=sCol;j--){
        if(sRow==eRow){
            break;
        }
        cout<<arr[eRow][j]<<" ";
    }
    for(int i=sRow-1;i>=sRow+1;i--){
        if(sCol==eCol){
            break;
        }
        cout<<arr[i][sCol]<<" ";
    }
sRow++;
sCol++;
eRow--;
eCol--;
}return 0;
}