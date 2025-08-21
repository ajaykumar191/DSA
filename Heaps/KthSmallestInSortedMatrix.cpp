#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<vector<int>>&matrix,int k){
    priority_queue<int>pq;
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pq.push(matrix[i][j]);
            while(pq.size()>k){
                pq.pop();
            }
        }
    }
    return pq.top();
}
int main(){

    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 8;

    cout << kthSmallest(matrix, k) << endl; // Output: 13
    return 0;
}