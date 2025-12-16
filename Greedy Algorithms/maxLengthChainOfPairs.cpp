#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int>p1, pair<int,int>p2){
    return p1.second<p2.second;
}
int maxLength(vector<int>st, vector<int>end){
    vector<pair<int,int>>pairs(5,make_pair(0,0));
    pairs[0]=make_pair(5,24);
    pairs[1]=make_pair(39,60);
    pairs[2]=make_pair(5,28);
    pairs[3]=make_pair(27,40);
    pairs[4]=make_pair(50,90);
    sort(pairs.begin(),pairs.end(), compare);
    int count=1;
    int last_end = pairs[0].second;

    for(int i=1; i<5; i++){
        if(pairs[i].first > last_end){ 
            count++;
            last_end = pairs[i].second;
        }
    }
    return count;
}
int main(){
    vector<int>st={5,39,5,27,50};
    vector<int>end={24,60,28,40,90};
    cout<<maxLength(st,end);
}