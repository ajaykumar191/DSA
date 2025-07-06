#include<bits/stdc++.h>
using namespace std;

int main(){

      //vector<int> nums={1,2,2,3,2};
    vector<int> nums={11,33,33,11,33,11};
    int n=nums.size();
    unordered_map<int,int>mp;
    vector<int>res;
    int maxi= (n/3)+1;

    for(int num:nums){
        mp[num]++;

        if(mp[num]==maxi){
            res.push_back(num);
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}