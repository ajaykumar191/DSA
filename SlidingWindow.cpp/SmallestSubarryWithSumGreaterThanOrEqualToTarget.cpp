#include<bits/stdc++.h>
using namespace std;

int main(){


    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};
    int n = nums.size();
    int left = 0;
    int right = 0;
    int sum = 0;
    int minLen = INT_MAX;

    while(right<n){
        sum+=nums[right];

        while(sum>=target){
            minLen = min(minLen, right-left+1);
            sum-=nums[left];
            left++;
        }
        
        right++;
    }
    cout<<"The length of the smallest subarrray with sum >= target is "<<minLen<<endl;
    return 0;
}