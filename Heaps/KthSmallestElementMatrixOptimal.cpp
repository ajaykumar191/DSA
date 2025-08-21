#include<bits/stdc++.h>
using namespace std;
int findKthSmallest(vector<vector<int>>&matrix,int k){

    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
    int n = matrix.size();
    for(int i=0;i<n;i++){
        pq.push({matrix[i][0],i,0});
    }
    int ans = -1;
    while(k--){
        auto top = pq.top();
        pq.pop();
        ans = top[0];
        int row = top[1];
        int col = top[2];

        if(col+1<n){
            pq.push({matrix[row][col+1],row,col+1});
        }
    }
    return ans;
}
int main(){
    
    vector<vector<int>> matrix = 
    {{10, 20, 30, 40},
    {15, 25, 35, 45},
    {24, 29, 37, 48},
    {32, 33, 39, 50}};
    
    int k = 7;

    int kthSmallets = findKthSmallest(matrix,k);
    cout<<kthSmallets<<endl;
// Output: 30

    return 0;
}