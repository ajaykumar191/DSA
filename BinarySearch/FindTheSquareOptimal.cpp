#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n){
    if (n == 0 || n == 1) return n;
    int low=0;
    int high =n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){

    int n = 75;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n<< " is: " << ans << "\n";
    return 0;
}