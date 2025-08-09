#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<vector<int>>matrix={{1, 1, 0}, {0, 1, 0}, {0, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int>iKnow(n,0);
    vector<int>knowMe(n,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i!=j && matrix[i][j]){
                iKnow[i]++;
                knowMe[j]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<< iKnow[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<< knowMe[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        if(iKnow[i]==0 && knowMe[i]==n-1){
            cout<<"The celebrity is "<<i<<endl;
        }
    }

}