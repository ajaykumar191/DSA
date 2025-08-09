#include<bits/stdc++.h>
using namespace std;

int helper(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;

    return 0;
}
int main(){


    int L = 4;
    int R = 9;

    cout<<"The left to right Xor is "<<(helper(R)^helper(L-1));

    // int xxor = 0;

    // for(int i=0;i<20;i++){
    //     xxor = xxor^i;
    //     cout<<i<<" "<<xxor<<endl;
    // }

    return 0;
}