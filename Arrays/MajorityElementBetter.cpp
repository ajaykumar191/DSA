#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n=arr.size();
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){

        if(it.second>n/2){
            cout<<"The majority element is "<<it.first<<endl;
        }
    }

    return 0;
}