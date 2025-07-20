#include<bits/stdc++.h>
using namespace std;

vector<int>findPeakGrid(vector<vector<int>>&matrix){

    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = m-1;

    while(low<=high){
        int mid = (low+high)/2;

        int maxRow = 0;

        for(int i=1;i<n;i++){
            if(matrix[i][mid]>matrix[maxRow][mid]){
                maxRow = i;
            }
        }

        int left = (mid-1>=0)?matrix[maxRow][mid-1]:-1;
        int right = (mid+1<m)?matrix[maxRow][mid+1]:-1;

        if(matrix[maxRow][mid]>left && matrix[maxRow][mid]>right){
            return {maxRow,mid};
        }else if(right>matrix[maxRow][mid]){
            low = mid+1;
        }else{
            high = mid-1;
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