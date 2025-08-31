#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>findFreeTime(vector<vector<vector<int>>>&intervals){

    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
    for(auto emp: intervals){
        for(auto interval: emp){
            pq.push(interval);
        }
    }

    vector<vector<int>>freeTimes;
    auto prev = pq.top(); pq.pop();
    while(!pq.empty()){

        int back = prev[1];

        auto curr = pq.top();
        pq.pop();

        if(prev[1]<curr[0]){
            freeTimes.push_back({prev[1],curr[0]});
            prev = curr;
        }else{
            prev[1]= max(prev[1],curr[1]);
        }
    }
    return freeTimes;
    
}

int main(){

    vector<vector<vector<int>>>intervals={{{1,3},{6,7}}, {{2,4}}, {{2,5},{9,12}}};
    vector<vector<int>>freeTimes = findFreeTime(intervals);
    for(auto it: freeTimes){
        for(int i :it){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}