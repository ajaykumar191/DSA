#include<bits/stdc++.h>
using namespace std;

int main(){

     vector<int> stocks = {7,1,5,3,6,4};
    int n=stocks.size();
    int maxProfit =0;
    int minPrice=INT_MAX;

    for(int i=0;i<n;i++){
        minPrice = min(minPrice,stocks[i]);
        maxProfit = max(maxProfit, stocks[i]-minPrice);
    }

    cout<<"The max profit is "<<maxProfit<<endl;

    return 0;
}