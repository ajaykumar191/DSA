#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>arr){
    int low=0;
    int high =arr.size()-1;
    int maxi=INT_MIN;

    while(low<=high){
        int mid=(low+high)/2;

        if (arr[low] <= arr[high]) {
            maxi = max(maxi, arr[high]);
            break;
        }
        if(arr[low]<=arr[mid]){
            maxi=max(maxi,arr[mid]);
            low=mid+1;
        }else{
            maxi=max(maxi,arr[mid]);
            high=mid-1;
        }
    }
    return maxi;

}
int main(){

    vector<int> arr = {4, 5, 6, 7,  1, 2, 3};
    int ans = findMax(arr);
    cout << "The maximum element is: " << ans << "\n";

    return 0;
}