#include<iostream>
#include<cstring>
using namespace std;
bool Palindrome(char arr[],int n){
    int st=0;
    int end=n-1;
   while(st<end){
    if(arr[st]!=arr[end]){
        return false;
    }st++;
    end--;
   }
   return true;
}
int main(){
    char arr[]="racecar";
    cout<<Palindrome(arr, strlen(arr));
    return 0;
}