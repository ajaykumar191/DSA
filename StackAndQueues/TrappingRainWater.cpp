#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>height){
    int count = 0;
    int left =0;
    int right = height.size()-1;
    int leftMax = 0;
    int rightMax = 0;

    while(left<=right){
        if(height[left]<height[right]){
            if(height[left]>=leftMax){
                leftMax = height[left];
            }else{
                count+=leftMax-height[left];
            }
            left++;
        }else{
            if(height[right]>=rightMax){
                rightMax = height[right];
            }else{
                count+=rightMax-height[right];
            }
            right--;
        }
    }
    return count;
}


int main(){

vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Water trapped: " << trap(height) << endl;
    return 0;
}