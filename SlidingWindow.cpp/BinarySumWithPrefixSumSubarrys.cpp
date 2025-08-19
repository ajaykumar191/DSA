#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int>arr={1,0,1,0,1,1,0,0,1};
    int k = 3;
    int n = arr.size();
    unordered_map<int,vector<int>>mp;
    int sum =0;
    int count =0;
    mp[0].push_back(-1);

    for(int i=0;i<n;i++){

        sum+=arr[i];

        if(mp.find(sum-k)!=mp.end()){

            for(int startIndex:mp[sum-k]){

                for(int j=startIndex+1;j<=i;j++){
                    cout<<arr[j]<<" ";
                }
                cout<<endl;
            }

        }
        mp[sum].push_back(i);
    }
    return 0;
}