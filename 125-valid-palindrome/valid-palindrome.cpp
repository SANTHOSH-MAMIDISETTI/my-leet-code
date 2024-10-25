class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;

        // Normalize the string: keep only alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        // Check if the filtered string is a palindrome
        int left = 0;
        int right = filtered.size() - 1;

        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false; // Not a palindrome
            }
            left++;
            right--;
        }

        return true; // It is a palindrome
    }
};