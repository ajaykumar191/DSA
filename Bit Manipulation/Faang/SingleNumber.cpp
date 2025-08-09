#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {4,1,2,1,2};
    int ans = 0;
    for(int num:arr){
        ans = ans ^ num;
    }

    cout<<"The number is "<<ans<<endl;
}


