#include <bits/stdc++.h>
using namespace std;
// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false

class BruteForcePalindrome
{
public:

    bool isPalindrome(string s){
        int low=0;
        int high =s.size()-1;
        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindromeII(string s){

        for (int i = 0; i < s.size(); i++){

            string temp = s.substr(0,i)+s.substr(i+1);
            
            if(isPalindrome(temp)) return true;
        }
        return false;
    }
};

class OptimizedPalindrome{

    public:
    
    bool isPalindrome(string s ,int low, int high){
        
        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;
            }else{
                return false;
            }
        }
        return true;
    }

    bool validPalindromeII(string s){
        int low=0;
        int high =s.size()-1;

        while(low<high){
            if(s[low]==s[high]){
                low++;
                high--;
            }else{
                return isPalindrome(s,low+1,high) || isPalindrome(s,low,high-1);
            }
        }
        return true;
    }

};

int main()
{

    BruteForcePalindrome Bp;
    OptimizedPalindrome Op;
    cout <<  Bp.validPalindromeII("aba")<<endl;
    cout <<  Bp.validPalindromeII("abca")<<endl;
    cout <<  Bp.validPalindromeII("abc")<<endl;
    cout <<  Op.validPalindromeII("aba")<<endl;
    cout <<  Op.validPalindromeII("abca")<<endl;
    cout <<  Op.validPalindromeII("abc")<<endl;

    return 0;
}