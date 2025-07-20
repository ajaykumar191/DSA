#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>&arr,int x,int n){
    int low =0;
    int high =n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]>x){
            ans = mid;
            high = mid-1;
            
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int countSmall(vector<vector<int>>&matrix,int n ,int m ,int mid){
    int count =0;
    for(int i=0;i<n;i++){
        count+=upperBound(matrix[i],mid,m);
    }
    return count;
}

int median(vector<vector<int>>&matrix,int n,int m){
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i=0;i<n;i++){
        low = min(low , matrix[i][0]);
        high = max(high, matrix[i][m-1]);
    }

    int req  = (n*m)/2;
    while(low<=high){
        int mid = (low+high)/2;
        int smallEqual = countSmall(matrix,n,m,mid);
        if(smallEqual<= req) low = mid+1;
        else high = mid-1;
    }
    return low;
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