#include<bits/stdc++.h>
using namespace std;

string minWindow(string s,string t){
    unordered_map<char,int>need;
    for(char c: t){
        need[c]++;
    }

    int required = need.size();
    int formed = 0;
    unordered_map<char,int>window;
    int start = -1;
    int left = 0;
    int right = 0;
    int n = s.size();
    int minLen= INT_MAX;
    while(right<n){
        char c = s[right];
        window[c]++;

        if(need.count(c) && window[c]==need[c]){
            formed++;
        }

        while(left<=right && formed == required){

            if(right-left + 1 <minLen){
                start = left;
                minLen = (right-left+1);
            }

            char d = s[left];
            window[d]--;

            if(need.count(d) && need[d]>window[d]){
                formed--;
            }

            left++;
        }

        right++;
    }

    if (start == -1) return "";
    return s.substr(start, minLen);

}

int main() {
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << "Minimum window substring: " << minWindow(s, t) << endl;
    return 0;
}