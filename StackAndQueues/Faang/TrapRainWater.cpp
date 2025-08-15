#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>heights={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = heights.size();
    int left = 0;
    int right = n-1;
    int leftMax = 0;
    int rightMax = 0;
    int count = 0;
    while(left<=right){

        if(heights[right]>heights[left]){
            if(leftMax<heights[left]){
                leftMax = heights[left];
            }else{
                count+=leftMax-heights[left];
            }
            left++;
        }else{
            if(rightMax<heights[right]){
                rightMax = heights[right];
            }else{
                count+=rightMax-heights[right];
            }
            right--;
        }
    }
    cout<<count<<endl;
    return 0;
}