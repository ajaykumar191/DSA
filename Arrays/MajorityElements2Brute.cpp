#include<bits/stdc++.h>
using namespace std;

int main(){

    //vector<int> nums={1,2,2,3,2};
    vector<int> nums={11,33,33,11,33,11};
    int n=nums.size();
    vector<int>res;
    for(int i=0;i<n;i++){

        int count =0;

        if(res.size()==0 || res[0]!=nums[i]){

            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }
        }
        if(count>n/3){
            res.push_back(nums[i]);
        }
        if(res.size()==2) break;
    }

    for(int i=0;i<res.size();i++){
        cout << res[i]<<" ";
    }

    return  0;
}