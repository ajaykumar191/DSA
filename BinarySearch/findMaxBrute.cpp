#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int>arr){
    int n =arr.size();

    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;

}
int main(){

    vector<int> arr = {4, 5, 6, 7,  1, 2, 3};
    int ans = findMax(arr);
    cout << "The maximum element is: " << ans << "\n";

    return 0;
}