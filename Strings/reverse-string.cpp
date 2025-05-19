#include <bits/stdc++.h>
using namespace std;
// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

class BruteForceReverseString{
    public:
        vector<string>temp;
        vector<string>reverseString(vector<string>str){

            int n=str.size();
            for(int i=0;i<n;i++){
                temp.push_back(str[n-i-1]);
            }
            return temp;

        }
};
//Time Complexity O(n)
//Space Complexity O(n)

class OptimalReverseString{
    public:
        vector<string>reverseString(vector<string>str){

            int j=str.size()-1;
            int i=0;
            while(i<j){
               swap(str[i],str[j]);
               i++;
               j--;
            }
            return str;

        }
};
//Time Complexity O(n)
//Space Complexity O(1)
int main(){
    vector<string>str1 = {"h","e","l","l","o"};
    vector<string>str2 = {"h","a","n","n","a","H"};

    BruteForceReverseString bfr;
    OptimalReverseString ors;

    vector<string>res1 = bfr.reverseString(str1);
    vector<string>res2 = ors.reverseString(str2);

    for(int i=0;i<res1.size();i++){
        cout << res1[i]<<" ";
    }
    cout << endl;

    for(int i=0;i<res2.size();i++){
        cout << res2[i]<<" ";
    }

}