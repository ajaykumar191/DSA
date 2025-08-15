#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerIndex(vector<int>arr,int n){
    vector<int>ans(n,n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}

vector<int> previousSmallerIndex(vector<int>arr,int n){
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;
}
int largetsReactangleInHistogram(vector<int>arr,int n){
    int count = 0;
    int maxRectangle = 0;

    vector<int>nsi=nextSmallerIndex(arr,n);
    vector<int>psi=previousSmallerIndex(arr,n);

    for(int i =0;i<n;i++){
        cout<<nsi[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<psi[i]<<" ";
    }
    cout<<endl;


    for(int i =0;i<n;i++){
        maxRectangle = max(maxRectangle, (nsi[i]-psi[i]-1)*arr[i]);
    }

    return maxRectangle;

}



int main(){
    vector<vector<string>>matrix = {
    {"1","0","1","0","0"},
    {"1","0","1","1","1"},
    {"1","1","1","1","1"},
    {"1","0","0","1","0"}};

    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>grid(n,vector<int>(m,0));
    for(int j=0;j<m;j++){
        int sum =0;
        for(int i=0;i<n;i++){
            if(matrix[i][j]=="1"){
                sum++;
            }else{
                sum=0;
            }
            grid[i][j]=sum;
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi, largetsReactangleInHistogram(grid[i],m));
    }
    cout<<maxi<<endl;

}