#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abcde";
    string goal = "cdeab";
    string temp = s+s;
    int n = temp.size();
    int m = goal.size();
    int index =0;
    for(int i=0;i<temp.size();i++){

        if(temp[i]==goal[index]){
            index++;

            if(index==m){
                cout<<"Goal is in s+s "<<endl;
                return 0;
            }
        }else{
            if(temp[i]==goal[0]){
                index=1;
            }else{
                index=0;
            }
        }
    }

    cout<<"Goal not found!"<<endl;
    return 0;
}