#include<bits/stdc++.h>
using namespace std;
int searchInARotatedSortedArrayII(vector<int>arr,int x){

    int low = 0;
    int high = arr.size()-1;

    while(low<=high){

        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }

        if(arr[low]<=arr[mid]){
            if(arr[low]<=x && arr[mid]>x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if(arr[mid]<=x && arr[high]>=x){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }

    return -1;


}
int main(){

    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int k = 3;
    int ans = searchInARotatedSortedArrayII(arr, k);
    if (!ans)
        cout << "Target is not present.\n";
    else
        cout << "Target is present in the array at "<<ans<<endl;;
    return 0;
}