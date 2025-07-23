#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<s<<endl;

    string ans="";
    string temp="";
    
    int left = 0;
    int right = s.size()-1;
    while(s[left]==' '){
        left++;
    }
    while(s[right]==' '){
        right--;
    }
    while(left<=right){
        if(s[left]==' '){
            if(!temp.empty()){
                
                if(ans.empty()){
                    ans = temp;
                }else{
                    ans = temp + " " + ans;
                }
                temp="";
            }
            
        }else{
            temp+=s[left];
        }
        left++;
    }
    if(temp!=""){
        if(ans==""){
            ans = temp;
        }else{
            ans = temp+" "+ans;
        }
    }




    cout<<"After reversing words: "<<endl;
    cout<<ans;
    return 0;
}