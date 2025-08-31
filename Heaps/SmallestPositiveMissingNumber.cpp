#include<bits/stdc++.h>
using namespace std;
int findMissingNumber(vector<int>&arr){
    priority_queue<int ,vector<int>, greater<int>>pq;
    for(int i:arr){
        if(i>0) pq.push(i);
    }
    int missing = 1;

    while(!pq.empty()){
        if(pq.top()>missing) return missing;
        else if(pq.top()==missing) missing++; 
        
        pq.pop();
    }
    return missing;
}
int main(){
    vector<int>arr ={3, 4, -1, 1};
    int n  = arr.size();

    int missing = findMissingNumber(arr);
    cout<<"The missing number is "<<missing<<endl;


    return 0;
}