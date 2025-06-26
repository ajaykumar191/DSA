#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>> matrix = {{1, 1, 1}, 
                                  {1, 0, 1}, 
                                  {1, 0, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int>rows(n,0);
    vector<int>cols(m,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rows[i] || cols[j]){
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
    return 0;
}