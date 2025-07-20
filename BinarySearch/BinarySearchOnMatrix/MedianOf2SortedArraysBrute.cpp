#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>>&matrix,int n ,int m){

    vector<int>arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr.push_back(matrix[i][j]);
        }
    }

    sort(arr.begin(),arr.end());

    return arr[(n*m)/2];
}
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    int m = matrix.size(), n = matrix[0].size();
    int ans = median(matrix, m, n);
    cout << "The median element is: " << ans << endl;
    return 0;
}

//BinarySearch/BinarySearchOnMatrix/MedianOf2SortedArraysOptimal.cpp