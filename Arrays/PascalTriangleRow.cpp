#include<bits/stdc++.h>
using namespace std;

int nCr(int n ,int r){
    int res =1;

    for(int i=0;i<r;i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}
int main(){

    int row=5;
    vector<int>v;
    for(int i=1;i<=row;i++){
        v.push_back(nCr(row-1,i-1));
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;

}