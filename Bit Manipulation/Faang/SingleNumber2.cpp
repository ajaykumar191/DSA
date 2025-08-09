#include<bits/stdc++.h>
using namespace std;
int main(){

    // bitset<32>one(1);
    // bitset<32>zero(0);
    // bitset<99>ninetynine(99);

    // for(int i=0;i<32;i++){
    //     cout<<ninetynine[32-i-1]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<32;i++){
    //     cout<<zero[32-i-1]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<32;i++){
    //     cout<<one[32-i-1]<<" ";
    // }
    // cout<<endl;
    vector<int>arr={0,1,0,1,0,1,99};
    int n = arr.size();
    int ans = 0;
    for(int i=0;i<32;i++){
        int count =0;

        for(int j=0;j<n;j++){

            if((arr[j]>>i)&1){
                count++;
            }
        }
        if(count%3 !=0){
            ans+=1<<i;
        }

    }
    cout<<"The number is "<<ans<<endl;

}