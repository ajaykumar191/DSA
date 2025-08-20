#include<bits/stdc++.h>
using namespace std;

int atMostK(vector<int>&arr,int k){
    unordered_map<int,int>mp;
    int left = 0;
    int right = 0;
    int n = arr.size();
    int count = 0;
    while(right<n){
        mp[arr[right]]++;
        while(mp.size()>k){
            mp[arr[left]]--;
            if(mp[arr[left]]==0) mp.erase(arr[left]);
            left++;
        }

        count+=(right-left+1);
        right++;
    }
    return count;
}
int main(){

    vector<int>arr= {1,2,1,2,3};
    int  k = 2;
    cout<<atMostK(arr,k)-atMostK(arr,k-1);

    return 0;
}