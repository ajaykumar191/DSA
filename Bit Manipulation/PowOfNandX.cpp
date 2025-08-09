#include<bits/stdc++.h>
using namespace std;

int main(){ 

    int base = 2;
    int expo = 11;
    int dummyExpo = expo;
    long long ans = 1;
    while(expo>0){

        if(expo%2==1){
            ans = ans*base;
            
        }
        
        base *= base;
        expo/=2;
    }

    if(dummyExpo<0){
        ans = 1/ans;
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;
}