#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    map<int,int>mp;

    for(int i=0;i<n;i++){
        
        int remain = target - arr[i];

        if(mp.find(remain)!=mp.end()){
            cout << "The indexes are " << mp[remain] << " " << i << endl;
        }
        mp[arr[i]]=i;
    }



}