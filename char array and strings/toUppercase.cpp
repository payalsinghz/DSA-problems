#include<iostream>
using namespace std;
void toUppercase(char arr[],int n){
    for(int i=0;i<n;i++){
        char ch=arr[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            arr[i]=ch-'a'+'A';
        }
    }cout<<arr;
}
int main(){
    char arr[]="aPplE";
    toUppercase(arr, 5);
    return 0;
}