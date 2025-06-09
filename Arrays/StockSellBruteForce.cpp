#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> stocks = {7,1,5,3,6,4};
    int n=stocks.size();
    int maxProfit =INT_MIN;
    
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(stocks[j]>stocks[i]){
                maxProfit = max(maxProfit,stocks[j]-stocks[i]) ;
            }
        }
    }
    cout<<"The max Profit is "<<maxProfit<<endl;

    return 0;
}