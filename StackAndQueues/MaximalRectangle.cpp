#include<bits/stdc++.h>
using namespace std;

vector<int>findNextSmallIndex(vector<int>&arr,int n){
    vector<int>psi(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            psi[i]=st.top();
        }
        st.push(i);
    }
    return psi;
}

vector<int>findPreviousSmallIndex(vector<int>&arr,int n){
    vector<int>psi(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty()&&arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            psi[i]=st.top();
        }
        st.push(i);
    }
    return psi;
}

int largestRectangleArea(vector<int>&heights){
    int n = heights.size();
    vector<int>nsi=findNextSmallIndex(heights,n);
    vector<int>psi=findPreviousSmallIndex(heights,n);
    // for(int i=0;i<n;i++){
    //     cout<<nsi[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<psi[i]<<" ";
    // }
    // cout<<endl;
    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi, heights[i]* (nsi[i]-psi[i]-1));
    }
    return maxi;
}

int main(){

    vector<vector<char>>matrix={{'1','0','1','0','0'},
                                {'1','0','1','1','1'},
                                {'1','1','1','1','1'},
                                {'1','0','0','1','0'}
                                };
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>heights(n,vector<int>(m,0));
    for(int j=0;j<m;j++){
        int sum =0;
        for(int i=0;i<n;i++){
            if(matrix[i][j]=='0'){
                sum=0;
            }else{
                sum+=matrix[i][j]-'0';
            }
            heights[i][j]=sum;
        }
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<heights[i][j]<<" ";
        }
        cout<<endl;
    }

    int maxi = 0;
    for(int i=0;i<n;i++){

        maxi=max(maxi,largestRectangleArea(heights[i]));
    }
    cout<<"The maximum area is "<<maxi<<endl;

}