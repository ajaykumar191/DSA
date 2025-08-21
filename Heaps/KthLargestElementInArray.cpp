#include<bits/stdc++.h>
using namespace std;

int findKthLargestElement(vector<int>&arr,int k){
    priority_queue<int,vector<int>,greater<>>minHeap;
    int n = arr.size();
    for(int i=0;i<n;i++){
        minHeap.push(arr[i]);
        while(minHeap.size()>k){
            minHeap.pop();
        }
    }
    return minHeap.top();

}


int main(){
    vector<int>arr={3,2,1,5,6,4 };
    int k = 2;
    int kthLargest= findKthLargestElement(arr,k);
    cout<<kthLargest<<endl;
    return 0;
}