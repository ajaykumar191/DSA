#include<bits/stdc++.h>
using namespace std;

vector<int>mergeKSortedArrays(vector<vector<int>>&arrays){

    priority_queue<vector<int>,vector<vector<int>>, greater<vector<int>>>pq;

    int n = arrays.size();

    for(int i=0;i<n;i++){
        pq.push({arrays[i][0],i,0});
    }
    vector<int>ans;
    while(!pq.empty()){
        auto top = pq.top();
        pq.pop();
        int value = top[0];
        int row = top[1];
        int col = top[2];
        ans.push_back(value);
        if(col+1< arrays[row].size()){
            pq.push({arrays[row][col+1],row,col+1});
        }
    }
    return ans;

}

int main(){
    vector<vector<int>> arrays = {
    {1, 4, 5},
    {1, 3, 4},
    {2, 6}};

    vector<int>ans = mergeKSortedArrays(arrays);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}