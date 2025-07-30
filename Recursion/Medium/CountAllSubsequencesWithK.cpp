#include<bits/stdc++.h>
using namespace std;

int countAllSubsequencesWithSumK(int sum,int index ,int n ,vector<int>arr,int k){
    if(index==n){
        return (sum==k)?1:0;
    }

    int include = countAllSubsequencesWithSumK(sum+arr[index],index+1,n,arr,k);
    int exclude = countAllSubsequencesWithSumK(sum,index+1,n,arr,k);

    return include+exclude;
}
int main(){
    vector<int>arr = {1,2,3,4,5,7};
    int k = 9;
    int n =arr.size();
    int i =0;
    int sum=0;
    int count =countAllSubsequencesWithSumK(sum,i,n,arr,k);

    cout<<"The total number of subsequenes with sum "<<k<<" "<<"are "<<count<<endl;

}