#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr = {4,1,2,1,2};
    int xxor = 0;

    for(int num:arr){
        xxor = xxor^num;
    }
    cout<<"The number that appears odd number of times is "<<xxor<<endl;

    return 0;
}