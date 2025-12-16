#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    int maxsum=INT8_MIN;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                
            }cout<<sum<<" ";
            maxsum=max(maxsum,sum);
        }
        cout<<endl;
       
    }
     cout<<maxsum;
    return 0;
}