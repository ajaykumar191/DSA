#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>&matrix,int x){
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==x){
                return true;
            }
        }
    }
    return false;
}

int main(){

    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
    return 0;
}


//BinarySearch/BinarySearchOnMatrix/SerachInA2DMatrixBrute.cpp
//SerachInA2DMatrixOptimal.cpp
