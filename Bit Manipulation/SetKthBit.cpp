#include<bits/stdc++.h>
using namespace std;

int main(){

    int k = 2;
    k=k-1;
    int num = 5;

    //8 4 2 1
    //0 1 0 1

    //1<<k
    //8 4 2 1
    //0 0 1 0
    

    num = num | (1<<k );
    cout<<num<<endl;

    return 0;
}