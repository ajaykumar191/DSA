#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string>&board,int n){
    
    //row and col
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q') return false;
        if(board[row][i]=='Q') return false;
    }

    //top -left 

    for(int i=row-1,j=col-1;i>=0 && j>=0 ; i--,j--){
        if(board[i][j]=='Q') return false;
    }

    for(int i=row+1,j=col-1;i<n && j>=0 ; i++,j--){
        if(board[i][j]=='Q') return false;
    }
    return true;

}


void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n){

    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int row =0;row<n;row++){

            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }

    }
}


int main(){

    int n = 4;
    vector<vector<string>>ans;
    vector<string>board(n,string(n,'.'));

    solve(0,board,ans,n);

    for(auto it : ans){
        for(string str:it){
            cout<<str<<endl;
        }
        cout<<endl;
    }


    return 0;
}