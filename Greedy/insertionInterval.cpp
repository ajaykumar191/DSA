#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>>findInsertInterval(vector<vector<int>>&interval,vector<int>&insertInterval){
    vector<vector<int>>ans;
    interval.push_back(insertInterval);
    sort(interval.begin(),interval.end());
    int n = interval.size();
    for(int i=0;i<n;i++){

        if(ans.empty() || ans.back()[1]<interval[i][0]){
            ans.push_back(interval[i]);
        }else{
            ans.back()[1]=max(ans.back()[1],interval[i][1]);
        }
    }
    return ans;
 }
int main(){

    vector<vector<int>>interval={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int>insertInterval={4,8};
    vector<vector<int>>ans = findInsertInterval(interval,insertInterval);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}