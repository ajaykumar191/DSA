#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>kthClose( vector<vector<int>>&points,int k){
    vector<vector<int>>ans;

    priority_queue<vector<int>>pq;

    for(int i=0;i<points.size();i++){
        int u = points[i][0];
        int v = points[i][1];
        int distance = (u*u) + (v*v);
        pq.push({distance,i});
        while(pq.size()>k){
            pq.pop();
        }
    }
    while(!pq.empty()){
        int index = pq.top()[1];
        pq.pop();
        ans.push_back(points[index]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){

    vector<vector<int>>points = {{3,3},{5,-1},{-2,4}};
    int k = 2;
    vector<vector<int>>ans = kthClose(points,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}