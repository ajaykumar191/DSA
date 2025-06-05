#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n=arr.size();

    int count = 0;
    int ele ;

    for(int i=0;i<n;i++){
        if(count ==0){
            ele =arr[i];
            count =1;
        }else if(ele == arr[i]){
            count++;
        }else{  
            count--;
        }
    }
    cout << "The majority element is "<<ele<<endl;
    //You can recheck by reiterating the  arrays if you want to.

    return 0;
}