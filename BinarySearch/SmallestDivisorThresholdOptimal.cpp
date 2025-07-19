#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int>&arr){
    int maxi=INT_MIN;
    for(int num:arr){
        maxi=max(maxi,num);
    }
    return maxi;
}

int calaculateSum(vector<int>&arr,int divisor){
    int totalSum=0;

    for(int i=0;i<arr.size();i++){

        totalSum+= ceil ((double)arr[i] / (double)divisor);
    }

    return totalSum;
}
int smallestDivisor(vector<int>&arr,int limit){
    int low=1;
    int high = findMax(arr);
    int ans =-1;
    while(low<=high){
        int mid = (low+high)/2;
        int result = calaculateSum(arr,mid);

        if(result<=limit){
            high=mid-1;
            ans= mid;
        }else{
            low=mid+1;
        }
        
    }
    return ans;
    
    


}
int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}