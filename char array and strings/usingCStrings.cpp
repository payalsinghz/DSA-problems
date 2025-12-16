#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    strcpy(str1, "hii");
    cout<<str1<<endl;
    char str2[100];
    cout<<strcpy(str2, str1)<<endl;
    strcat(str1, str2);
    cout<<strcmp(str1, str2)<<endl;
    return 0;
}
