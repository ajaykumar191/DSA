#include<bits/stdc++.h>
using namespace std;
void printAns(vector < vector < int >> & ans) {
   cout<<"The unique subsets are "<<endl;
   cout << "[ ";
   for (int i = 0; i < ans.size(); i++) {
      cout << "[ ";
      for (int j = 0; j < ans[i].size(); j++)
         cout << ans[i][j] << " ";
      cout << "]";
   }
   cout << " ]";
}

void findSubsets(int index ,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);

    for(int i=index;i<arr.size();i++){
        if(i!=index && arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        findSubsets(i+1,arr,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>subsetsWithDup(vector<int>&arr){
    int index =0;
    vector<int>ds;
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    findSubsets(index, arr, ds, ans);

    return ans;

}
int main(){

    vector < int > nums = {1,2,2 };
    vector < vector < int >> ans =subsetsWithDup(nums);
    printAns(ans);
    return 0;
}