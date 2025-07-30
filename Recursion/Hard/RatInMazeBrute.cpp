#include<bits/stdc++.h>
using namespace std;
//    helper(0,0,maze,visited,ans,ds,n,m);
void helper(int row,int col,vector<vector<int>>&maze,vector<vector<int>>&visited,vector<string>&ans,string &ds,int n,int m){
    if(row == n-1 && col == m-1){
        ans.push_back(ds);
        return;
    }

    //Bottom
    //row+1,col

    if(row+1<n && maze[row+1][col]==1 && visited[row+1][col]==0){
        ds.push_back('B');
        visited[row+1][col]=1;
        helper(row+1,col,maze,visited,ans,ds,n,m);
        ds.pop_back();
        visited[row+1][col]=0;
    }

    //left row ,col-1

    if(col-1>=0 && maze[row][col-1] && visited[row][col-1]==0){
        ds.push_back('L');
        visited[row][col-1]=1;
        helper(row,col-1,maze,visited,ans,ds,n,m);
        visited[row][col-1]=0;
        ds.pop_back();
    }

    //Top row-1 , col
    if(row-1>=0 && maze[row-1][col] ==1 && visited[row-1][col]==0){
        ds.push_back('T');
        visited[row-1][col]=1;
        helper(row-1,col,maze,visited,ans,ds,n,m);
        visited[row-1][col]=0;
        ds.pop_back();
    }

    //right row col+1
    if(col+1<m && maze[row][col+1] == 1 && visited[row][col+1]==0){
        ds.push_back('R');
        visited[row][col+1]=1;
        helper(row,col+1,maze,visited,ans,ds,n,m);
        ds.pop_back();
        visited[row][col+1]=0;
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