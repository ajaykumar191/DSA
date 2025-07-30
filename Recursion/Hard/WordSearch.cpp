#include<bits/stdc++.h>
using namespace std;

bool searchNext(int index,vector<vector<char>>&board,string word,int row,int col,int n,int m){
    if(index == word.size()){
        return true;
    }

    if(row<0 || col< 0 || row ==n || col ==m || board[row][col]!=word[index] || board[row][col]=='!'){
        return false;
    }

    char c = board[row][col];

    board[row][col]='!';

    bool top = searchNext(index+1,board,word,row-1,col,n,m);
    bool bottom = searchNext(index+1,board,word,row+1,col,n,m);
    bool left = searchNext(index+1,board,word,row,col-1,n,m);
    bool right = searchNext(index+1,board,word,row,col+1,n,m);
    board[row][col]=c;
    return top || bottom || left || right;
}


bool exist(vector<vector<char>>&board,string str){
    int index =0;
    int n = board.size();
    int m = board[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(searchNext(index,board,str,i,j,n,m)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<char>>board{
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','F'}
    };

    string word = "ABCCED";

    bool res = exist(board,word);

    if(res) {
        cout<<"True "<<endl;
    }else{
        cout<<"False "<<endl;
    }
}