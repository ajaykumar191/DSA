#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        cout << arr[i]<<" ";
    }
    
}

//Time Complexity O(n log(n));
//Space Complexity O(1)