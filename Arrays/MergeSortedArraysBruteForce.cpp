#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr1={1, 4 ,8 ,10};
    vector<int>arr2={2,3,9};
    vector<int>temp;
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();

    while(i<n && j<m){

        if(arr1[i]<=arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }else{
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i<n){
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        temp.push_back(arr2[j]);
        j++;
    }

    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;

    int index=0;
    for(int i=0;i<arr1.size();i++){
        arr1[i]=temp[index++];
    }
    for(int i=0;i<arr2.size();i++){
        arr2[i]=temp[index++];
    }

      for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
     cout<<endl;

    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
     cout<<endl;






    return 0;
}