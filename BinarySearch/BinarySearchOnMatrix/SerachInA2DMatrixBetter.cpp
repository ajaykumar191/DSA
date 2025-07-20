#include<bits/stdc++.h>
using namespace std;

bool binarySearch (vector<int>&arr,int n, int x){

    int low = 0;
    int high = n-1;
    while(low<=high){
        
        int mid = (low+high)/2;

        if(arr[mid]==x){
            return true;
        }else if(arr[mid]>x){
            high=mid-1;
        }else{
            low = mid+1;
        }
    }
    return false;

}

bool searchMatrix(vector<vector<int>>&matrix,int x){

    int n = matrix.size();
    int m = matrix[0].size();
    for(int i=0;i<n;i++){
        
        if(matrix[i][0]<=x && matrix[i][m-1]>=x){

            if(binarySearch(matrix[i],m,x)){
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