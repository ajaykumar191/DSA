#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {100, 200, 1, 2, 3, 4};
    int n=arr.size();

    int longest =1;

    sort(arr.begin(), arr.end());

    
    int count=1;
    for(int i=0;i<n-1;i++){
        if (arr[i] == arr[i - 1]) {
            continue;  
        } else if(arr[i]+1==arr[i+1]){
            count++;
        }else{
            count=1;
        }
        longest=max(longest,count);
    }
    cout<<"The longest lenght is "<<longest<<endl;
    return 0;
}