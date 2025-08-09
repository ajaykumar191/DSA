#include<bits/stdc++.h>
using namespace std;

int main(){


    // int num = 5;
    // bitset<32>numset(5);
    // bitset<32>negnumset(-5);


    // for(int i=0;i<32;i++){
    //     cout<<numset[32-i-1]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<32;i++){
    //     cout<<numset[32-i-1]<<" ";
    // }
    // cout<<endl;

    vector<int>arr = {2, 4, 3, 2, 3, 4, 5, 7};
    int n =arr.size();

    int bucket1 =0;
    int bucket2 =0;

    int xorAll =0;
    for(int num:arr){
        xorAll^=num;
    }
    int rightBit = xorAll & -xorAll;
    for(int num:arr){
        if(num&rightBit){
            bucket1^=num;
        }else{
            bucket2^=num;
        }
    } 
    
    cout<<"The numbers are "<<bucket1<<" "<<bucket2<<endl;
     

    return 0;
}