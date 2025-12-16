#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter day\n";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday\n";
        break;
    case 2:
        cout<<"Tuesday\n";
        break;
    case 3:
        cout<<"Wednesday\n";
        break;
    case 4:
        cout<<"Thursday\n";
        break;
    default:
    cout<<"Invalid\n";
        break;
    }
    return 0;
}
