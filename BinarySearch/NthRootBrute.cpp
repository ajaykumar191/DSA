#include<bits/stdc++.h>
using namespace std;
long long func(int base,int exp){
    long long ans=1;
    long long b=base;

    while(exp>0){
        if(exp%2){
            ans=ans*base;
            exp--;
        }else{
            exp=exp/2;
            base=base*base;
        }
    }
    return ans;
}
int NthRoot(int n,int m){
    for(int i=0;i<=m;i++){
        long long val= func(i,n);
        if(val==m*1ll) return i;
        if(val>m*1ll){
            break;
        }
    }
    return -1;
}

int main(){
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}