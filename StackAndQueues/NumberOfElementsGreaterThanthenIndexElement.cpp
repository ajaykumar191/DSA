#include<bits/stdc++.h>
using namespace std;

vector<int>helper(vector<int>arr,int n){
    stack<int>greater,smaller;

    for(int i=n-1;i>=0;i--){
        
        while(!greater.empty() && greater.top()>=arr[i]){
            int top = greater.top();
            greater.pop();
            smaller.push(top);
        }

        while(!smaller.empty() && smaller.top()>=arr[i]){
            int top = smaller.top();
            smaller.pop();
            greater.push(top);
        }

        greater.push(arr[i]);



    }
}

int main(){

    vector<int>arr = {3, 4, 2, 7, 5, 8, 10, 6};
    int n =arr.size();



    return 0;
}