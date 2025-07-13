#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>arr){
    int n=arr.size();
    if(n==1)  return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    

    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            return i;
        }
    }

    return -1;
}
int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";

    return 0;
}