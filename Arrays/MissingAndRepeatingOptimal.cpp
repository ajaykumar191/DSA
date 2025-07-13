#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={1,2,2,3};
    int n=arr.size();

    int SN=(n*(n+1))/2;
    int S2N=(n*(n+1)*(2*n+1))/6;

    int S=0;
    int S2=0;

    for(int num:arr){
        S+=num;
        S2+=(num*num);
    }


    //X-Y
    int val1 = S-SN;
    //(X-Y)(X+Y)
    int val2 = S2-S2N;
    //(X-Y)(X+Y)/(X-Y)--->(X+Y)

    //(X+Y)
    val2=val2/val1;

    int x= (val1+val2)/2;
    int y = x-val1;
   

    cout<<"Missing number "<<x<<endl;
    cout<<"Repeating number "<<y<<endl;




    return 0;
}