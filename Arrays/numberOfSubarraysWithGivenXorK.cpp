#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int count=0;
    for(int i=0;i<a.size();i++){
        int xxor=0;
        for(int j=i;j<a.size();j++){
            xxor=xxor^a[j];

            if(xxor==k){
                count++;
            }
        }
    }
    cout<<"Total number of subarryas are "<<count<<endl;
    return 0;
}