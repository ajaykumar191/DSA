#include<bits/stdc++.h>
using namespace std;

int calculateMaximumProfit(int k, int w , vector<int>profit,vector<int>capital){
   vector<pair<int,int>> v;
   
    for (int i = 0; i < profit.size(); i++) {
        v.push_back({capital[i], profit[i]});
    }
    sort(v.begin(),v.end());
    int n = v.size();
    int i=0;
    priority_queue<int>pq;

    while(k>0){

        while(i<n && w>=v[i].first){
            pq.push(v[i].second);
            i++;
        }
        if(pq.empty()) break;
        
        w+=pq.top();
        
        k--;
    }
    return w;

}

int main(){

    int k = 2;
    int w = 0;

    vector<int>profits = {1,2,3};
    vector<int>capital = {0,1,1};

    int maxProfit = calculateMaximumProfit(k,w,profits,capital);
    cout<<maxProfit<<endl;
    return 0;
}