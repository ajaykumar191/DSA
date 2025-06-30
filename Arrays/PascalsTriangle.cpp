#include<bits/stdc++.h>
using namespace std;

int nCr(int n,int r){
    int res =1;
    for (int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}


int main(){

    int n = 5;
    int r = 3;
    cout << "The pascal value is "<<nCr(n-1,r-1);


    return  0;
}