#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int>ans;
    int n = nums.size();
    deque<int>dq;

    for(int i=0;i<k;i++){
        while(!dq.empty() &&  nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);

    for(int i=k;i<n;i++){

        if(dq.front()==i-k){
            dq.pop_front();
        }

        while(!dq.empty() &&  nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(nums[dq.front()]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}