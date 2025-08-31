#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,3,1,1,1,1,1,1};
    int k = 6;
int n = arr.size();
int L=0;
int R=0;
int sum = 0;
int maxLen = 0;
while(R<n){
    sum+=arr[R];
    while(sum>k){
        sum=sum-arr[L];
        L++;
    }
    if(sum==k){

        maxLen = max(maxLen , int(R-L+1));
    }
    R++;
}
cout<<maxLen<<endl;

}