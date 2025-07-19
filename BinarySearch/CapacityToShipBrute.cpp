#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&weights,int capacity, int d){
    int load =0;
    int totalDays = 1;
    for(int i=0;i<weights.size();i++){
        if(weights[i]+load>capacity){
            totalDays++;
            load =weights[i];
        }else{
            load = load + weights[i];
        }
    }

    return totalDays<=d;
}
int leastWeightCapacity(vector<int>&weights,int d){
    int maxi=*max_element(weights.begin(),weights.end());
    int sum = accumulate(weights.begin(),weights.end(),0);

    for(int i=maxi;i<=sum;i++){
        if(isPossible(weights,i,d)){
            return i;
        }
    }
    return -1;
}
int main(){


    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}