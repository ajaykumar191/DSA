#include<bits/stdc++.h>
using namespace std;

bool isSafe(int node ,vector<int>adj[],int color,vector<int>&colors){

    for(int neightbor:adj[node]){
        if(colors[neightbor]==color){
            return false;
        }
    }
    return true;

}


bool solve(int node,vector<int>adj[],vector<int>&colors,int n ,int m){
    if(node ==n){
        return true;
    }

    for(int i=1;i<=m;i++){

        if(isSafe(node,adj,i,colors)){
            colors[node]=i;
            if(solve(node+1,adj,colors,n,m)){return true;}
            colors[node]=0;
        }
    }
    return false;
}


int main(){
    vector<pair<int,int>>edges ={{0, 1}, {1, 2}, {2, 3}, {3, 0}, {0, 2}};
    int n = 4;
    int m = 3;

    for(auto it:edges){
        cout<<it.first<<" "<<it.second<<endl;
    }
    vector<int>colors(n,0);

    vector<int>adj[n];
    for(auto it:edges){

        int u = it.first;
        int v = it.second;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    if(solve(0,adj,colors,n,m)){
        cout<<"We can apply M colors"<<endl;
    }else{
        cout<<"We cannot apply M colors"<<endl;
    }
}