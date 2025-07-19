#include<bits/stdc++.h>
using namespace std;

long long func(long long base,int exp){
    long long ans=1;
    while(exp>0){
        if(exp%2){
        ans=ans*base;
        exp--;
        }else{
            base=base*base;
            exp=exp/2;
        }
    }
    
    return ans;
}

int NthRoot(int n,int m){

    int low=1;
    int high=m;
    while(low<=high){
        int mid=(low+high)/2;

        long long value = func((long long)mid,n);
        if(value==m){
            return mid;
        }else if(value>m){
            high=mid-1;
        }else{
            low=mid+1;
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