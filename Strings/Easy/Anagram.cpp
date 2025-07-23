#include<bits/stdc++.h>
using namespace std;
// int main(){

//     string s = "anagram";
//     string t = "nagaram";

//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());


//     if(s!=t){
//         cout<<"Not anagrma"<<endl;
//     }else{
//         cout<<"Anagram"<<endl;
//     }

//     return 0;
// }

int main(){
    string s = "anagram";
    string t = "nagaram";

    vector<int>freq(26,0);

    if(s.size()!=t.size()){
        cout<<"Not anagram!"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram"<<endl;

    return 0;
}