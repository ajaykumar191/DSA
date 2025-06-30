#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
int main(){

    int n=5;
    vector<vector<int>>res;
    for(int i=1;i<=n;i++){
        vector<int>temp;
        for(int j=1;j<=i;j++){
            temp.push_back(nCr(i-1,j-1));
        }
        res.push_back(temp);
    }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}