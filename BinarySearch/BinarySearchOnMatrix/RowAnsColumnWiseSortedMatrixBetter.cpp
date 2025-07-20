#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>&arr,int k){
    int low =0;
    int high = arr.size()-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k) return true;

        else if(arr[mid]>k){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return false;
}
bool searchElement(vector<vector<int>>&matrix,int k){
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++){

        if (binarySearch(matrix[i],k)){
            return true;
        }
    }
    return false;
}


int main(){
    vector<vector<int>> matrix = {{1,  4,  7,  11, 15}, 
                                  {2,  5,  8,  12, 19},
                                  {3,  6,  9,  16, 22}, 
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}
    };
    searchElement(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}