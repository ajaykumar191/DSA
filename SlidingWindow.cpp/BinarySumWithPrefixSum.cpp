#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,0,1,0,1,1,0,0,1};
    int k = 3;
    int n = arr.size();
    unordered_map<int,int>mp;
    int sum =0;
    int count =0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    cout<<"The total number of subarrys with k sum are "<<count<<endl;
    return 0;
}