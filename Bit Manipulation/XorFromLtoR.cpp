#include<bits/stdc++.h>
using namespace std;

int main(){

    int L = 4 ;
    int R = 9 ;

    int xxor = 0;
    for(int i=L;i<=R;i++){
        xxor = xxor^i;
    }
    cout<<"The answer is "<<xxor<<endl;

    return 0;
}