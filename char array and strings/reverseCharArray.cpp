#include<iostream>
using namespace std;
void reverse(char arr[],int n){
    int st=0;
    int end=n-1;
   while(st<=end){
    swap(arr[st], arr[end]);
    st++;
    end--;
   }
   cout<<arr;
}
int main(){
    char arr[]="apple";
    reverse(arr, 5);
    return 0;
}