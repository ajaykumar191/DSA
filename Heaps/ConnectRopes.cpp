#include<bits/stdc++.h>
using namespace std;
int calculateCost(vector<int>arr){

    priority_queue<int, vector<int>, greater<int>>pq;
    for(int rope: arr){
        pq.push(rope);
    }
    int totalCost = 0;
    while(pq.size()>1){
        int r1 = pq.top();pq.pop();
        int r2 = pq.top();pq.pop();
        int sum=(r1+r2);
        totalCost+=sum;
        pq.push(sum);
    }
    return totalCost;
}
int main(){

    vector<int>arr= {4, 3, 2, 6};
    int n = arr.size();

    int cost = calculateCost(arr);
    cout<<cost<<endl;

    return 0;
}