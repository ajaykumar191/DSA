#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row ,int col , vector<string>board,int n){

    for(int i=0;i<n;i++){
        if(board[row][i]=='Q') return false;
    }
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q') return false;
    }

    //  for(int i = row-1, j = col-1; i>=0 && j>=0; i--, j--) {
    //     if(board[i][j] == 'Q') return false;
    // }

    for(int i = row-1, j = col-1;i>=0 && j>=0 ; i--,j--){
        if(board[i][j]=='Q') return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
        if(board[i][j]=='Q') return false;
    }

    return true;
}


void solve(int row,vector<string>&board,vector<vector<string>>&res,int n){
    if(row == n){
        res.push_back(board);
        return;
    }

   for(int col=0;col<n;col++){

    if(isSafe(row,col,board,n)){
        board[row][col]='Q';
        solve(row+1,board,res,n);
        board[row][col]='.';
    }
   }
}


int main(){

    int n = 5;
    vector<vector<string>>res;
    vector<string>board(n,string(n,'.'));

    solve(0,board,res,n);

    for(auto it :res){
        for(string str:it){
            cout<<str<<endl;
        }
        cout<<endl;
    }

    return 0;
}