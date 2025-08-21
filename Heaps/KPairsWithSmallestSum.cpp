#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>kSmallestPairs(vector<int>nums1,vector<int>nums2,int k){
    priority_queue<vector<int>,vector<vector<int>>, greater<vector<int>>>pq;

    for(int i=0;i<nums1.size();i++){
        pq.push({nums1[i]+nums2[0],i,0});
    }
    vector<vector<int>>ans;
    while(!pq.empty() && k--){
        vector<int>top = pq.top();
        pq.pop();
        int i = top[1];
        int j = top[2];
        ans.push_back({nums1[i],nums2[j]});
        if(j+1<nums2.size()){
            pq.push({nums1[i]+nums2[j+1],i,j+1});
        }
    }
    return ans;
}
int main(){


     vector<int> nums1 = {1,7,11};
    vector<int> nums2 = {2,4,6};
    int k = 3;

    vector<vector<int>> ans = kSmallestPairs(nums1, nums2, k);

    cout << "Smallest " << k << " pairs: \n";
    for (auto &p : ans) {
        cout << "[" << p[0] << "," << p[1] << "] ";
    }
    cout << endl;
    return 0;
}