#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {1,2,-3,0,-4,-5};
    int n =nums.size();
    int maxProduct=INT_MIN;
    for(int i=0;i<n;i++){
        int product=1;

        for(int j=i;j<n;j++){
            product*=nums[j];
            maxProduct=max(maxProduct,product);
        }
    }

    cout<<"The maximum product is "<<maxProduct<<endl;


    return 0;
}