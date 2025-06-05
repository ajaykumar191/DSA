#include <bits/stdc++.h>
using namespace std;

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"

class BruteForceReverseVowels{
    public:
       
        bool isVowel(char ch){
            ch = tolower(ch);
            if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'){
                return true;
            }
            return false;
        }

       
        string reverseVowels(string str){
            stack<char>st;
            int n=str.size();

            for(int i=0;i<n;i++){
                if(isVowel(str[i])){
                    st.push(str[i]);
                }
           }

           for(int i=0;i<n;i++){
            if(isVowel(str[i])){
                str[i]=st.top();
                st.pop();
            }
           }
           return str;
        }
};
//Time Complexity O(n)
//Space Complexity O(N)
class OptimizedReverseVowels{
    public:
        bool isVowel(char ch){
            ch= tolower(ch);
            return (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u');
        }
        string reverseVowels(string s){
            int low=0;
            int high = s.size()-1;
            while(low<high){

                while(low<high && !isVowel(s[low])) low++;
                while(low<high && !isVowel(s[high])) high--; 
                if(low<high){
                    swap(s[low],s[high]);
                    low++;
                    high--;
                }

            }
            return s;
        }
};
//Time Complexity O(n)
//Space Complexity O(1)

int main(){

    BruteForceReverseVowels Br;
    OptimizedReverseVowels Or;
    cout<< Br.reverseVowels("IceCreAm")<<endl;
    cout<< Br.reverseVowels("leetcode")<<endl;
    cout<< Or.reverseVowels("IceCreAm")<<endl;
    cout<< Or.reverseVowels("leetcode")<<endl;

    return 0;
}