#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>fruits = {1,2,3,2,2};
    int n = fruits.size();
    int k = 2;
    unordered_map<int,int>mp;
    int left = 0;
    int right = 0;
    int maxSum = 0;
    int sum = 0;
    int maxLen = 0;
    while(right<n){

        sum+=fruits[right];
        mp[fruits[right]]++;

        while(mp.size()>k){
            sum-=fruits[left];
            mp[fruits[left]]--;
            if(mp[fruits[left]]==0) mp.erase(fruits[left]);
            left++;
        }
        maxLen = max(maxLen,right-left+1);
        maxSum = max(maxSum,sum);
        right++;
    }

    cout<<"The total length "<<maxLen<<endl;
    cout<<"The total number of fruits are "<<maxSum<<endl;



    return 0;
}