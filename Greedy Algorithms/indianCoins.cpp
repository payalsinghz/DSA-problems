#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minCoin(vector<int>coins, int val){
    int ans=0;
    for(int i=coins.size()-1;i>=0;i--){
        if(val>=coins[i]){
            ans+=val/coins[i];
            val=val%coins[i];
            if(val<=0){
                break;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>coins={1,2,5,10,20,50,100,500,2000};
    int val=1099;
    cout<<minCoin(coins, val);
}