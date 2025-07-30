#include<bits/stdc++.h>
using namespace std;
//    helper(0,0,maze,visited,ans,ds,n,m);
void helper(int row,int col,vector<vector<int>>&maze,vector<vector<int>>&visited,vector<string>&ans,string ds,int n,int m){
    if(row == n-1 && col == m-1){
        ans.push_back(ds);
        return;
    }

    vector<int>dx = {1, 0,-1,0};
    vector<int>dy = {0,-1, 0,1};
    string direction = "BLTR";
    for(int i=0;i<4;i++){
        int nrow = row+dx[i];
        int ncol = col+dy[i];

        if(nrow>=0 && nrow<n && ncol >=0 && ncol<m && maze[nrow][ncol]==1 && visited[nrow][ncol]==0){
            visited[nrow][ncol]=1;
            helper(nrow,ncol,maze,visited,ans,ds+direction[i],n,m);
            visited[nrow][ncol]=0;
        }

    }
}

int main(){


    vector<vector<int>>maze ={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    int n = maze.size();
    int m = maze[0].size();

    vector<string>ans;
    string ds ="";
    vector<vector<int>>visited(n,vector<int>(m,0));
    visited[0][0]=1;
    helper(0,0,maze,visited,ans,ds,n,m);

    for(string str:ans){
        cout<<str<<endl;
    }
    return 0;
}