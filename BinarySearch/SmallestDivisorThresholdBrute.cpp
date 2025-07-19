#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>&arr){
    int maxi=INT_MIN;
    for(int num:arr){
        maxi=max(num,maxi);
    }
    return maxi;
}

bool isPossible(vector<int>arr,int dividor,int limit){

    int sum = 0;

    for(int i=0;i<arr.size();i++){
        sum+= ceil((double)(arr[i]) / (double)(dividor));
    }

     return sum<=limit;

}
int smallestDivisor(vector<int>arr,int limit){
    int n= findMax(arr);

    for(int i=1;i<=n;i++){

        if(isPossible(arr,i,limit)){
            return i;
        }

    }
    return -1;

}
int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;

    return 0;
}

//BinarySearch/SmallestDivisorThresholdBrute.cpp