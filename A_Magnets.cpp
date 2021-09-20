#include <bits/stdc++.h>

using namespace std;




vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {

set<int> rank;
for(auto x:ranked){
    rank.insert(x);
}
sort(rank.begin(),rank.end(),greater<int>());
set<int>::iterator it;
vector<int> ans;
int n = rank.size();
for(int i=0;i<player.size();i++){
    int rank  =1;
    for(it = rank.begin();it!=rank.end();){
        while(player[i]<*it&&(it!=rank.end()){
            it++;
            rank++;
        }
        ans.push_back(rank);
        break;
    }
    
}
return ans;
}

int main(){
    
    int n;
    cin>>n;
    
    vector<int> ranked(n);
    int data;
    while(n--){
        cin>>data;
        ranked.push_back(data);
    }
    int m ;
    cin>>m;
    vector<int> player;
    
    while(m--){
        cin>>data;
        player.push_back(data);
    }
    vector<int> ans = climbingLeaderboard(ranked, player);
    
    for(auto x:ans){
        cout<<x<<" ";
    }
}