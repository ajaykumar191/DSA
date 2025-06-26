#include <bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int>arr,int x){
    int n =arr.size();

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}


int main(){

    vector<int> arr = {100, 200, 1, 2, 3, 4};
    int n=arr.size();

    int longest =1;

    for(int i=0;i<n;i++){
        int x = arr[i];
        int cnt = 1;
        while(linearsearch(arr,x+1)){
            x+=1;
            cnt+=1;
        }
        longest = max(longest,cnt);
    }

    cout<<"The lenght is "<<longest<<endl;


    return 0;
}