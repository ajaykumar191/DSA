#include<bits/stdc++.h>
using namespace std;

int main(){

    //vector<int>arr={9, -3, 3, -1, 6, -5};
   // vector<int> arr = {1, 2, -2, 4, -4};


   // vector<int> arr = {1, -1, 3, 2, -2, -3};
   // vector<int> arr = {0, 0, 0, 0};
   // vector<int> arr = {6, 1, -1, 2, -2, 3, -3};
    vector<int> arr = {1, 2, 3, 4, 5};

    int n=arr.size();
    unordered_map<int,int>mp;
    int maxLen=0;
    int preSum=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];

        if(preSum==0){
            maxLen=i+1;
        }

        if(mp.find(preSum)!=mp.end()){
            maxLen=max(maxLen,i-mp[preSum]);
        }
        else{
            mp[preSum]=i;
        }
    }
    cout<<"The maxLen is "<<maxLen<<endl;



}