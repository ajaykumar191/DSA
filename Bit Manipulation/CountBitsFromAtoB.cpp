#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 10;
    int b = 5;

    int target = a^b;

    bitset<32>aset(a),bset(5);
    for(int i=0;i<32;i++){
        cout<<aset[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<32;i++){
        cout<<bset[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    while(target>0){
        if(target&1) count++;
        target = target >>1;
    }
    cout<<"1^0 is "<<(1^0)<<endl;
    cout<<"The total number of bits are "<<count<<endl;
    return 0;
}