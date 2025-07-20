#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>& matrix, int row, int col) {
    int n = matrix.size();
    int m = matrix[0].size();
    int value = matrix[row][col];

    if (row > 0 && matrix[row - 1][col] >= value) return false;   // Up
    if (row + 1 < n && matrix[row + 1][col] >= value) return false; // Down
    if (col > 0 && matrix[row][col - 1] >= value) return false;   // Left
    if (col + 1 < m && matrix[row][col + 1] >= value) return false; // Right

    return true;
}



int main(){

    vector<vector<int>> mat = {
    {1, 4, 3},
    {6, 7, 8},
    {2, 5, 9}};
// Expected: (2,2) -> 9 is a peak (largest and > all neighbors).
    int n =mat.size();
    int m = mat[0].size();   
    for(int  i=0;i<n;i++){

        for(int j=0;j<m;j++){

            if(isValid(mat,i,j)){
                cout<<"i "<<i<<" j "<<j<<endl;
            }
        }
    }


    return 0;
}

//BinarySearch/FindPeak2OptimalRow.cpp