#include<bits/stdc++.h>
using namespace std;

int countStudents(vector<int>&arr,int pages){
    int students =1;
    int pagesCount =0;  
    int n =arr.size();
    for(int i=0;i<n;i++){
        if(pagesCount+arr[i]<=pages){
            pagesCount+=arr[i];
        }else{
            students++;
            pagesCount=arr[i];
        }
    }
    return students;
}


int findPages(vector<int>&arr,int n,int m){
    int low=*max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;

        int totalStudents = countStudents(arr, mid);
        if(totalStudents>m){
            low = mid+1;
        }else{
            ans = mid;
            high=mid-1;
            
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = findPages(arr, n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}