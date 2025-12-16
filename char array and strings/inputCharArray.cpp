#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[30];
    cin>>arr;
    cout<<"ans :"<<arr;
    char word[30];
    cin.getline(word, 30);
    cout<<"ans :"<<word;
    cin.getline(word, 30, '.');
    cout<<"ans :"<<word;
    return 0;
}