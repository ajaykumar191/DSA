#include<bits/stdc++.h>
using namespace std;

int searchElement(vector<vector<int>>&matrix,int k){
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==k){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    searchElement(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}

//BinarySearch/BinarySearchOnMatrix/RowAnsColumnWiseSortedMatrixBrute.cpp

//RowAnsColumnWiseSortedMatrixOptimal.cpp