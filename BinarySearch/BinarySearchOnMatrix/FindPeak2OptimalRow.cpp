#include<bits/stdc++.h>
using namespace std;
vector<int>findPeakGrid(vector<vector<int>>&matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int>peaks;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;

        int maxCol =0;
        for(int i=1;i<m;i++){
            if(matrix[mid][maxCol]<matrix[mid][i]){
                maxCol = i;
            }
        }

        int up = (mid-1>=0)?matrix[mid-1][maxCol]:-1;
        int down = (mid+1<n)?matrix[mid+1][maxCol]:-1;

        if(matrix[mid][maxCol]>up && matrix[mid][maxCol]>down){
            return {mid,maxCol};
        }else if(up>matrix[mid][maxCol]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return {-1,-1};
}
int main(){

    vector<vector<int>> mat = {
        {1, 4, 3},
        {6, 7, 8},
        {2, 5, 9}
    };

    vector<int> peak = findPeakGrid(mat);
    cout << "Peak found at: (" << peak[0] << ", " << peak[1] << ")"
         << " -> " << mat[peak[0]][peak[1]] << endl;

    return 0;
}

//BinarySearch/BinarySearchOnMatrix/FindPeak2OptimalCol.cpp