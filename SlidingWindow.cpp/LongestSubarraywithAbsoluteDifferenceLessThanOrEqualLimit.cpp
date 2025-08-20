#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>&arr,int limit){
    deque<int>greater,smaller;
    int left = 0;
    int right = 0;
    int n = arr.size();
    int maxlen = 0;

    while(right<n){

        while(!smaller.empty() && smaller.back()>=arr[right]){
            smaller.pop_back();
        }
        smaller.push_back(arr[right]);

        while(!greater.empty() && greater.back()<=arr[right]){
            greater.pop_back();
        }
        greater.push_back(arr[right]);

        while(!smaller.empty() && !greater.empty() && greater.front()-smaller.front()>limit){
            if(!smaller.empty() && arr[left]==smaller.front()) smaller.pop_front();
            if(!greater.empty() && arr[left]==greater.front()) greater.pop_front();
            left++;
        }
        maxlen = max(maxlen,right-left+1);
        right++;
    }
    return maxlen;
}


int main() {
    vector<int> nums = {8,2,4,7};
    int limit = 4;
    cout << longestSubarray(nums, limit) << endl; 
    return 0;
}