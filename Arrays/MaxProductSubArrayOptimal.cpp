#include<bits/stdc++.h>
using namespace std;

int main(){


    //vector<int> arr = {1,2,-3,0,-4,-5};
     vector<int>arr = {-1, -2, -3, 0};

    //arr = {-1, -2, -3, 0}

    int n =arr.size();

    int suffix=1;
    int prefix=1;
    int maxProduct=INT_MIN;
    for(int i=0;i<n;i++){

        prefix=prefix*arr[i];
        suffix=suffix*arr[n-i-1];
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;

        maxProduct=max(maxProduct,max(prefix,suffix));
    }

    cout<<"The max product is "<<maxProduct<<endl;



    return 0;
}