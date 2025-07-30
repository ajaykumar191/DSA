#include<bits/stdc++.h>
using namespace std;
// bool subSetWithGivemSum(int sum,int index,vector<int>&arr,int k){
//     if(index==arr.size()){
//         if(sum==k){
//             return true;
//         }else{
//             return false;
//         }
//     }

//     int include = subSetWithGivemSum(sum+arr[index],index+1,arr,k);
//     int exclude = subSetWithGivemSum(sum,index+1,arr,k);

//     return include || exclude;

// }


int countTotalSubsetsWithKSum(int index,int sum,vector<int>&arr,int k){
    if(index==arr.size()){
        if(sum == k){
            return 1;
        }else{
            return 0;
        }
    }
        int include = countTotalSubsetsWithKSum(index+1,sum+arr[index],arr,k);
        int exclude = countTotalSubsetsWithKSum(index+1,sum,arr,k);

        return include+exclude;
    
}

void generateAllSubsetsWithSumK(int index ,int sum,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int k){
    if(index == arr.size()){
        if(sum == k){
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(arr[index]);
    generateAllSubsetsWithSumK(index+1,sum+arr[index],arr,ds,ans,k);
    ds.pop_back();
    generateAllSubsetsWithSumK(index+1,sum,arr,ds,ans,k);
   

}
int main(){

    vector<int>arr = {1,2,4,6,7};
    int k = 9;
    int sum = 0;
    int index =0;
    // bool ans = subSetWithGivemSum(sum,index,arr,k);

    // if(ans){
    //     cout<<"The subset exists"<<endl;
    // }else{
    //     cout<<"The subset doesnot exists"<<endl;
    // }

    //int count = countTotalSubsetsWithKSum(0,0,arr,k);

    //cout<<"The total number of subsets are "<<count<<endl;

    vector<int>ds;
    vector<vector<int>>ans;
    generateAllSubsetsWithSumK(0,0,arr,ds,ans,k);

    for(auto it:ans){
        for(int num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}