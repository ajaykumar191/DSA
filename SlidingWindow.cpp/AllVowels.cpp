#include <bits/stdc++.h>
using namespace std;

int longestBeautifulSubstring(string &s) {
    int n = s.size();
    int len = 1, count = (s[0] == 'a'); 
    int maxLen = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] >= s[i-1]) {
            len++;
            if (s[i] != s[i-1]) count++;
        } else {
            len = 1;
            count = (s[i] == 'a'); 
        }

        if (count == 5) {
            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}

int main() {
    string s = "aeiaaioaaaaeiiiiouuuooaauuaeiu";
    cout << "Longest substring length = " << longestBeautifulSubstring(s) << endl;
    return 0;
}
