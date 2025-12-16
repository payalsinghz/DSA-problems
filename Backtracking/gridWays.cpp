#include<iostream>
#include<string>
using namespace std;
int gridWays(int r, int c, int n , int m){
   if(r==n-1&&c==m-1){
    return 1;
    
   }
   if(r>=n || c>=m){
        return 0;
    }
   return gridWays(r,c+1,n,m)+gridWays(r+1,c,n,m);
}
int main(){
    int n=4;
    int m=5;
    cout<<gridWays(0,0,n,m);
}