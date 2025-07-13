#include<bits/stdc++.h>
using namespace std;

int XOR(vector<int>arr){
    int op=0;
    for(int num:arr){
        op=op^num;
    }
    return op;
}

int singleNonDuplicate(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){

        if(i==0){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
        }
        else if(i==n-1){
            if(arr[i]!=arr[i-1]){
                return arr[i];
            }
        }else{
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){

    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans = singleNonDuplicate(arr);
    int ans1= XOR(arr);
    cout << "The single element is: " << ans << "\n";
    cout << "The single element is: " << ans1 << "\n";

    return 0;

   
}