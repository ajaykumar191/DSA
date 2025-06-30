//N = 4, array[] = {3, 1, 2, 4}, k = 6
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={3, 1, 2, 4};
    int k=6;
    int  n=arr.size();
    unordered_map<int,int>mp;
    mp[0]=1;
    int preSum=0;
    int count=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        int remain = preSum-k;
        count +=mp[remain];
        mp[preSum]++;
    }

    cout<<"Total number of subarrays are "<<count<<endl;

    return 0;
}