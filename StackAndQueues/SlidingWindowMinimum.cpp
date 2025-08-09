#include<bits/stdc++.h>
using namespace std;
vector<int>minimumSlidingWindow(vector<int>&arr,int n ,int k){
    vector<int>ans;
    deque<int>dq;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()==i-k) dq.pop_front();

        while(!dq.empty() && arr[dq.back()]>arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i-k>=0) ans.push_back(arr[dq.front()]);
    }
    return ans;
}
int main(){


    vector<int>arr ={4,0,-1,3,5,3,6,8};
    int k = 3;
    vector<int>ans = minimumSlidingWindow(arr,arr.size(),k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}