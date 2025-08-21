#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<vector<int>>&matrix,int k){
    int n = matrix.size();
    priority_queue<vector<int>>pq;

    for(int i=0;i<n;i++){
        pq.push({matrix[n-1][i],i,n-1});
    }

    int ans = -1;
    while(k--){
        auto top = pq.top();
        pq.pop();
        ans = top[0];
        int row = top[1];
        int col = top[2];

        if(col-1>=0){
            pq.push({matrix[row][col-1],row,col-1});
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {24, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int k = 1;

    int kthLargest = findKthLargest(matrix, k);
    cout << kthLargest << endl; 

    return 0;
}