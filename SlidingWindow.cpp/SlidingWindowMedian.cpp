#include<bits/stdc++.h>
using namespace std;

class SlidingWindow{
    public:
        priority_queue<int>maxHeap;
        priority_queue<int,vector<int>,greater<>>minHeap;
        unordered_map<int,int>lazyDelete;

    void insert(int num){

        if(lazyDelete[maxHeap.top()]){
            maxHeap.pop();
        }
        
        if(lazyDelete[minHeap.top()]){
            minHeap.pop();
        }

        maxHeap.push(num);
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double median(){
        if(maxHeap.size()>minHeap.size()){
            return maxHeap.top();
        }
        return (maxHeap.top()+minHeap.top())/2;
    }


    
};


vector<double>meidanSlidingWindow(vector<int>arr,int k){
    int n = arr.size();
    SlidingWindow s;
    vector<double>ans;
    for(int i=0;i<k;i++){
        s.insert(arr[i]);
    }
    ans.push_back(s.median());

    for(int i=k;i<n;i++){
        s.lazyDelete[arr[i-k]]++;
        s.insert(arr[i]);
        ans.push_back(s.median());
    }
    return ans;
}

int main(){

    vector<int>arr  = {1, 3, -1, -3, 5, 3, 6, 7};
    int  k = 3;
    vector<double>ans = meidanSlidingWindow(arr,k);
    for(double d : ans){
        cout<<d<<" ";
    }

    return 0;
}