#include<bits/stdc++.h>
using namespace std;

int main(){

    int x =0;

    for(int i=0;i<20;i++){
        x= x^ i;
        cout<<i<<" "<<x<<endl;
    }

    return 0;
}