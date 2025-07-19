#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        if(i*i<=n){
            ans=i;
        }else{
            break;
        }
    }
    return ans;
}
int main(){

    int n = 28;
    int ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}