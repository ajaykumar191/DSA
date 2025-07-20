#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>>&matrix,int n,int m){
    int index =-1;
    int maxCount =0;
    for(int i=0;i<n;i++){
        int count =0;

        for(int j=0;j<m;j++){

            if(matrix[i][j]==1){
                count++;
            }
        }
        if(maxCount<count){
            maxCount = count ;
            index = i;
        }
    }
    return index;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<rowWithMax1s(matrix, n, m) << '\n';
}


///BinarySearch/BinarySearchOnMatrix/RowWithMaximumNumberOnesBrute.cpp