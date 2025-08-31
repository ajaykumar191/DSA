#include<bits/stdc++.h>
using namespace std;
vector<int>smallestRange(vector<vector<int>>nums){
    int n = nums.size();

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>pq;

    int currMax = INT_MIN;
    int rangeStart = 0;
    int rangeEnd = INT_MAX;

    for(int i=0;i<n;i++){
        pq.push({nums[i][0],i,0});
        currMax=max(currMax,nums[i][0]);
    }
    while(true){
        auto curr = pq.top();
        pq.pop();

        int currMin = curr[0];
        int col = curr[2];
        int row = curr[1];
        if(currMax-currMin < rangeEnd-rangeStart ){
            rangeStart = currMin;
            rangeEnd = currMax;
        }

        if(col+1<nums[row].size()){
            int nextVal = nums[row][col+1];
            pq.push({nextVal,row,col+1});
            currMax = max(currMax,nextVal);
        }else{
            break;
        }
    }

    return {rangeStart,rangeEnd};


}
int main(){

     vector<vector<int>> nums = {
        {4,10,15,24,26},
        {0,9,12,20},
        {5,18,22,30}
    };

    vector<int> ans = smallestRange(nums);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl; // Output: [20,24]

    return 0;
}