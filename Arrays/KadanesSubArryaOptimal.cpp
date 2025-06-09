#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum=0;
    int maxi=INT_MIN;
    int n=arr.size();
    int startIndex=-1;
    int endIndex=-1;
    int start=0;
    for(int i=0;i<n;i++){

        if(sum ==0){
            start =i;
        }
        sum+=arr[i];
        if(sum>maxi){
            startIndex=start;
            endIndex=i;
            maxi=max(maxi,sum);
        }
        if(sum<0){
            
            sum=0;
        }
    }
    cout<<"The start index is "<<startIndex <<" and the end index is "<<endIndex <<endl;
    cout<<"The sum is "<<maxi<<endl;

    return 0;
}