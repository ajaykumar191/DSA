#include<bits/stdc++.h>
using namespace std;

int findMedian(vector<int>&nums1,vector<int>&nums2){
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;

    for(int i=0;i<nums1.size();i++){
        maxHeap.push(nums1[i]);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    for(int i=0;i<nums2.size();i++){
        maxHeap.push(nums2[i]);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }



    if(maxHeap.size()>minHeap.size()) return maxHeap.top();
    return ((minHeap.top()+maxHeap.top())/2);
    
}

int main(){

    vector<int>nums1 ={1,2};
    vector<int>nums2 = {3,4};

    int median = findMedian(nums1,nums2);
    cout<<"The meidan is "<<median<<endl;

    return 0;
}