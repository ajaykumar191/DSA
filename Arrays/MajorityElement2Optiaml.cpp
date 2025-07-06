#include<bits/stdc++.h>
using namespace std;

int main(){

     //vector<int> arr={1,2,2,3,2};
    //vector<int> arr={11,33,33,11,33,11};
    int n=arr.size();

    int count1=0;
    int count2=0;
    int ele1=INT_MAX;
    int ele2=INT_MAX;

    for(int i=0;i<n;i++){
        if(count1 ==0 && ele2!=arr[i]){
            count1++;
            ele1=arr[i];
        }else if(count2 ==0 && ele1 !=arr[i]){
            count2++;
            ele2=arr[i];
        }else if(arr[i]==ele1){
            count1++;
        }else if(arr[i]==ele2){
            count2++;
        }else{
            count1--;
            count2--;
        }
    }
    cout << ele1<<" "<<ele2<<endl;

    return 0;
}