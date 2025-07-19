#include<bits/stdc++.h>
using namespace std;
int calculatePainters(vector<int>&boards,int paint){
    int painters=1;
    int totalpaint=0;
    for(int i=0;i<boards.size();i++){
        if(totalpaint+boards[i]<=paint){
            totalpaint+=boards[i];
        }else{
            painters++;
            totalpaint=boards[i];
        }
    }
    return painters;
}
int findLargestMinDistance(vector<int>&boards,int k){
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);
    
    for(int i=low;i<=high;i++){

        int painters = calculatePainters(boards,i);
        if(painters == k){
            return i;
        }
        
    }
    return -1;
}


int main(){
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;
    int ans = findLargestMinDistance(boards, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

//BinarySearch/PaintersPartitionProblemBrute.cpp