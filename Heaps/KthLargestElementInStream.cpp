#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>>pq;

int add(int val,int k){

    pq.push(val);

    if(pq.size()>k){
        pq.pop();
    }
    return pq.top();
}

int main(){

    //4, 5, 8, 2
    int k = 3;
    pq.push(4);
    pq.push(5);
    vector<int>arr={8 ,2 ,3 ,5 ,10 ,9 ,4};
    int n = arr.size();


    for(int i:arr){
        int kthLargest = add(i,k);
        cout<<kthLargest<<endl;
    }


    //8 2 3 5 10 9 4

    return 0;
}