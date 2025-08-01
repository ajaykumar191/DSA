#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 5;
    int k = 3;
    k=k-1;

    // 8 4 2 1
    // 0 1 0 1

    if(num & (1<<k)){
        cout<<"The kth bit is set "<<endl;
    }else{
        cout<<"The kth bit is not set"<<endl;
    }
    
    

    return 0;
}