#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>matrix={{1, 1, 0}, {0, 1, 0}, {0, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();

    int top =0;
    int down = n-1;
    while(top<down){
        if(matrix[top][down]){
            top++;
        }else if(matrix[down][top]){
            down--;
        }else{
            top++;
            down--;
        }
    }
    cout<<top<<" "<<down<<endl;
    for(int i=0;i<n;i++){
        if( i!=top && matrix[i][top]==0 ){
            cout<<"No celebrity found"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=top && matrix[top][i]==1 ){
            cout<<"No celebrity found"<<endl;
            return 0;
        }
    }

    cout<<"The celebrity is "<<top<<endl;

    return 0;
}