#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    sort(arr.begin(),arr.end());

    int low=0;
    int high =n-1;
    while(low<high){
        if(arr[low]+arr[high]==target){
            cout << "The numbers are "<< arr[low]<<" "<<arr[high]<<endl;
            break;
        }
        else if( arr[low]+arr[high] > target){
            high--;
        }
        else{
            low++;
        }
    }


    return 0;
}