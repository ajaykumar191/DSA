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
    vector<int>arr={2,1,5,6,2,3};
    int n = arr.size();
    int ans = largetsReactangleInHistogram(arr,n);
    cout<<"The ans is "<<ans<<endl;
    return 0;
}