#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxi=INT_MIN;
    int n=arr.size();
    int startIndex=-1;
    int endIndex=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];

            if(sum>maxi){
                startIndex=i;
                endIndex=j;
                maxi=max(maxi,sum);
            }
        }
    }
    cout<<"The indexes are "<<startIndex <<" "<<endIndex<<endl;
    cout<<"The max subarruy sum is "<<maxi<<endl;



    return 0;
}