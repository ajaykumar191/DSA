#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>matrix={
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}
    };
    int n=matrix.size();
    vector<vector<int>>res(n,vector<int>(n,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[j][n-i-1]=matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}