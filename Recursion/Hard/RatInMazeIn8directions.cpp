#include<bits/stdc++.h>
using namespace std;
//    helper(0,0,maze,visited,ans,ds,n,m);
void helper(int row,int col,vector<vector<int>>&maze,vector<vector<int>>&visited,vector<string>&ans,string ds,int n,int m){
    if(row == n-1 && col == m-1){
        ans.push_back(ds);
        return;
    }

    //bottom row+1 ,col
    int newrow = row+1 ;
    int newcol = col;

    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('B');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
    }

    //left row , col -1;
    newrow = row;
    newcol = col-1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('L');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
    }
    //top row-1,col
    newrow = row-1;
    newcol = col;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('T');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
    }
    //right row col+1
    newrow = row;
    newcol = col+1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('R');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
    }
    //top-left row-1 col+1
    newrow = row-1;
    newcol = col-1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('T');
        ds.push_back('L');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
        ds.pop_back();
    }
    //top-right row-1 col+1;
    newrow = row-1;
    newcol = col+1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('T');
        ds.push_back('R');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
        ds.pop_back();
    }
    //bottom left row+1 col-1
    newrow = row+1;
    newcol = col-1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('B');
        ds.push_back('L');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
        ds.pop_back();
    }
    //bottom right = row+1 col+1
    newrow = row+1;
    newcol = col+1;
    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && maze[newrow][newcol]==1 && visited[newrow][newcol]==0){
        visited[newrow][newcol]=1;
        ds.push_back('B');
        ds.push_back('R');
        ds.push_back('|');
        helper(newrow,newcol,maze,visited,ans,ds,n,m);
        visited[newrow][newcol]=0;
        ds.pop_back();
        ds.pop_back();
        ds.pop_back();
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