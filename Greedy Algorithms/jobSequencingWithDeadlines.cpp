#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int>p1, pair<int,int>p2){
    return p1.second>p2.second;
}
int maxProfit(vector<int>deadline, vector<int>profit){
    vector<pair<int,int>>pairs(4,make_pair(0,0));
    pairs[0]=make_pair(4,20);
    pairs[1]=make_pair(1,10);
    pairs[2]=make_pair(1,40);
    pairs[3]=make_pair(1,30);
    sort(pairs.begin(),pairs.end(), compare);
    int count=1;
    int last_end = 2;
    int ans=pairs[0].second;
    for(int i=1; i<4; i++){
        if(pairs[i].first > last_end){ 
            count++;
            ans+= pairs[i].second;
            last_end++;
        }
    }
    cout<<"profit is "<<ans<<endl;
    return count;
}
int main(){
    vector<int>deadline={4,1,1,1};
    vector<int>profit={20,10,40,30};
    cout<<maxProfit(profit,deadline);
}