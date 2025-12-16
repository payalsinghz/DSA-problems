#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int maxsum=INT8_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
     cout<<maxsum;
    return 0;
}
