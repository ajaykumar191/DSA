#include<bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int>&arr,int k){
    priority_queue<int>pq;
    for(int i=0;i<arr.size();i++){
        pq.push(arr[i]);
        while(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
     vector<int> arr = {3, 2, 1, 5, 6, 4};
    int n = arr.size();
    int k = 5;

    int kthSmallest = findKthSmallest(arr,k);
    cout << k << "nd smallest element is " << kthSmallest << endl;



    return 0;
}