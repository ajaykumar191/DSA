#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>&arr,int pages ){
    int students=1;
    int pageCount =0;
    int n=arr.size();
    for(int i=0;i<n;i++){

        if(arr[i]+pageCount<=pages){
            pageCount+=arr[i];
        }else{
            students++;
            pageCount=arr[i];
        }
    }
    return students;
}

int findPages(vector<int>&arr,int n,int m){
    int low=*max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    for(int i=low;i<=high;i++){

        int totalStudents = countStudents(arr,i);
        if(totalStudents==m){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

//BinarySearch/BookAllocationBrute.cpp