#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = -1534236933;
    long long ans =0;


    while(x!=0){

        int digit = x%10;
        ans = (ans*10) + digit;

        if(ans>INT_MAX || ans<INT_MIN){
            cout<<"Nope not possible"<<endl;
            return 0;
        }
        x=x/10;
    }
    cout<<ans<<endl;
    return 0;
}