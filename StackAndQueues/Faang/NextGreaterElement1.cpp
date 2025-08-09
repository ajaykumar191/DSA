#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};

    unordered_map<int,int>mp;
    stack<int>st;
    for(int i=nums2.size()-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()){
            mp[nums2[i]]=-1;
        }else{
            mp[nums2[i]]=st.top();
        }
        st.push(nums2[i]);
    }

    vector<int>ans;
    for(int num:nums1){
        ans.push_back(mp[num]);
    }

    for(int num:ans){
        cout<<num<<" ";
    }
}