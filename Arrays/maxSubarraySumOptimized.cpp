#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }cout<<endl;
        maxsum=max(maxsum,sum);
       
    }
     cout<<maxsum;
    return 0;
}