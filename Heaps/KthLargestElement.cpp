#include<bits/stdc++.h>
using namespace std;

priority_queue<int ,vector<int>,greater<>>pq;

int findKthLargest(int num,int k){
    pq.push(num);

    while(pq.size()>k){
        pq.pop();
    }
    return pq.top();
}   


int main(){

    pq.push(4);
    pq.push(5);
    pq.push(8);
    pq.push(2);
    int k = 3;
    vector<int>arr={3,5,10,9,7};

    for(int i=0;i<arr.size();i++){

        int kthLarget = findKthLargest(arr[i],k);
        cout<<"Kth largest is "<<kthLarget<<endl;
    }


    return 0;
}