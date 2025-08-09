#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = ")()())";
    int left = 0;
    int right = 0;
    int maxLen = 0;
    for(char ch :str){
        if(ch =='(') left++;
        else right++;

        if(left == right) maxLen = max(maxLen , 2*right);
        else if (right>left) left = right = 0;
    }

    left = 0;
    right = 0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='(') left++;
        else right++;

        if(left == right) maxLen = max(maxLen,2*left);
        else if(left>right) left = right = 0;
    }

     cout << "The longest valid parentheses length is " << maxLen << endl;
    return 0;
}