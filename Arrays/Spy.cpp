#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix={
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}};
    int n=matrix.size();

    int left =0;
    int right =n-1;
    int top=0;
    int bottom=n-1;
    vector<int>res;

    while(left<=right && top<=bottom){

        for(int i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            res.push_back(matrix[i][right]);
        }
        right--;
        if(left<=right){
            for(int i=right;i>=left;i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(top<=bottom){
            for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}