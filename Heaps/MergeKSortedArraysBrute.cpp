#include<bits/stdc++.h>
using namespace std;
vector<int>mergeKSortedArrays( vector<vector<int>>&arrays){
    vector<int>ans;
    for(int i=0;i<arrays.size();i++){
        for(int j=0;j<arrays[i].size();j++){
            ans.push_back(arrays[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){

    vector<vector<int>> arrays = {
    {1, 4, 5},
    {1, 3, 4},
    {2, 6}};

    vector<int>ans = mergeKSortedArrays(arrays);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}