// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.


//Brute force 
//traverse through the string once create a new string eliminating spaces and special characters.
//Then apply the normal palindrome algo. That will do it.
#include <bits/stdc++.h>
using namespace std;

// Brute force approach
class BruteForcePalindrome {
public:
    bool isPalindrome(string str) {
        string cleaned;

        for (char ch : str) {
            if (isalnum(ch)) {
                cleaned += tolower(ch);
            }
        }

        int n = cleaned.size();
        for (int i = 0; i < n / 2; i++) {
            if (cleaned[i] != cleaned[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};

// Optimal two-pointer approach
class OptimalPalindrome {
public:
    bool isSpecialChar(char ch) {
        return !(isalnum(ch));
    }

    bool isPalindrome(string str) {
        int i = 0, j = str.size() - 1;

        while (i < j) {
            while (i < j && isSpecialChar(str[i])) i++;
            while (i < j && isSpecialChar(str[j])) j--;

            if (tolower(str[i]) != tolower(str[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};

int main() {
    string str = "A man, a plan, a canal: Panama";

    BruteForcePalindrome bp;
    OptimalPalindrome op;

    cout << boolalpha;

    cout << "Brute force says: " << bp.isPalindrome(str) << endl;
    cout << "Optimal says: " << op.isPalindrome(str) << endl;

    return 0;
}
