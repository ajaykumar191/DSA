#include <bits/stdc++.h>
using namespace std;

void setRow(vector<vector<int>>&matrix,int row,int n,int m){
    for(int i=0;i<m;i++){
        if(matrix[row][i]!=0){
            matrix[row][i]=-1;
        }
        
        
    }
}

void setCol(vector<vector<int>>&matrix,int col,int n,int m){
    for(int i=0;i<n;i++){
        if(matrix[i][col]!=0){
            matrix[i][col]=-1;
        }
        
    }
}

int main(){

    vector<vector<int>> matrix = {{1, 1, 1}, 
                                  {1, 0, 1}, 
                                  {1, 0, 0}};
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                setRow(matrix,i,n,m);
                setCol(matrix,j,n,m);
            }
            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}