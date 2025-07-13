#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>arr){
    int mini=INT_MAX;
    int low = 0;
    int high = arr.size()-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[low]<=arr[mid]){
            mini=min(mini,arr[low]);
            low=mid+1;
        }else{
            mini=min(mini,arr[mid]);
            high=mid-1;
        }
    }

    return mini;

}
int main(){

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}