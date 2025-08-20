#include<bits/stdc++.h>
using namespace std;

priority_queue<int>maxHeap;
priority_queue<int,vector<int>,greater<>>minHeap;

int findMedian(int num){
    maxHeap.push(num);
    minHeap.push(maxHeap.top());
    maxHeap.pop();

    while(minHeap.size()>maxHeap.size()){
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }

    if(maxHeap.size()>minHeap.size()){
        return maxHeap.top();
    }
    return (maxHeap.top()+minHeap.top()) /2;
    
}


int main(){

    vector<int>arr={1,5,10,29,92,99};

    for(int num:arr){
        int median = findMedian(num);
        cout<<"The median is "<<median<<endl;
    }
    




    // for(int num:arr){
    //     maxHeap.push(num);
    //     minHeap.push(num);
    // }

    // while(!maxHeap.empty()){
    //     cout<<maxHeap.top()<<" ";
    //     maxHeap.pop();
    // }
    // cout<<endl;
    //  while(!minHeap.empty()){
    //     cout<<minHeap.top()<<" ";
    //     minHeap.pop();
    // }


    return 0;
}