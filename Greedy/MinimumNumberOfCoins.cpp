#include<bits/stdc++.h>
using namespace std;

int countCoins(vector<int>&coins,int cost){
    int n = coins.size();
    int count = 0;
    for(int i=n-1;i>=0;i--){

        while(cost>=coins[i]){
            cost-=coins[i];
            count++;
        }
        if(cost==0) break;
    }
    return count;
}

int main(){
    int cost = 39;
    vector<int>coins={1,2,5,10};

    int count = countCoins(coins,cost);

    cout<<"The total number of coins required are "<<count<<endl;

    return 0;
}