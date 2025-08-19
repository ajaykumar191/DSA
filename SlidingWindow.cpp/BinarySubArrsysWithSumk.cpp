#include<bits/stdc++.h>
using namespace std;

int countAllSubArrysWithAtMostSumk(vector<int>&arr,int k){
    int l = 0, r = 0, n = arr.size();
    int count = 0, sum = 0;

    while(r < n){
        sum += arr[r];

        while(sum > k){
            sum -= arr[l++];
        }
        count += (r - l + 1);
        r++;    
    }
    return count;
}

int main(){
    vector<int>arr={1,0,1,0,1,1,0,0,1};
    int k = 3;
    cout << countAllSubArrysWithAtMostSumk(arr,k) - countAllSubArrysWithAtMostSumk(arr,k-1) << endl;
    return 0;
}
