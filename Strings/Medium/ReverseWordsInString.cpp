#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "the sky is blue";
    int n =s.size();
    string temp = "";
    string ans = "";

    int left =0;
    int right = n-1;

    while (left <= right && s[left] == ' ') left++;
    while (right >= 0 && s[right] == ' ') right--;

    while(left<=right){

        if(s[left]==' '){
            if(!temp.empty()){
                if(ans.empty()){
                ans = temp;
                }else{
                    ans = temp + " "+ans;
                }
                temp="";
                }
            
        }else{
            temp+=s[left];
        }
        left++;
    }
    if(ans.empty()){
        ans = temp;
    }else{
        ans = temp + " "+ans;
    }
    cout<<ans<<endl;
    return 0;
}