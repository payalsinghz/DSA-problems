#include<iostream>
using namespace std;
int profit(int arr[], int n){
    int leftmax[10000];
    int rightmax[10000];

    int water=0;
   leftmax[0]=arr[0];
   cout<<leftmax[0]<<" ";
   for(int i=1;i<n;i++){
       leftmax[i]=max(arr[i-1],leftmax[i-1]);
       cout<<leftmax[i]<<" ";
   }cout<<endl;
   rightmax[n-1]=arr[n-1];
   for(int j=n-2;j>=0;j--){
       rightmax[j]=max(arr[j+1],rightmax[j+1]);
      }
   for(int i=0;i<n;i++){
    cout<<rightmax[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<n;i++){
       int trapped=min(leftmax[i],rightmax[i])-arr[i];
       /*It is imp to note that if trapped water comes negative that means it has no sense*/
       if(trapped>0){
            water+=trapped;
       }
      
   }
   cout<<"water trapped = "<<water;
}
int main(){
int arr[]={5,4,3,2,1};
int n=sizeof(arr)/sizeof(int);
profit(arr,n);
}