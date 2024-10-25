// class Solution {
// public:
//     bool isPalindrome(string s) 
//     {
//         string filtered;
//         for (char c : s) 
//         {
//             if (isalnum(c)) 
//             {
//                 filtered += tolower(c);
//             }
//         }
//         int left = 0;
//         int right = filtered.size() - 1;

//         while (left < right) 
//         {
//             if (filtered[left] != filtered[right]) 
//             {
//                 return false;
//             }
//             left++;
//             right--;
//         }

//         return true; // It is a palindrome
//     }
// }; 

class Solution {
public:
    bool isPalindrome(std::string s) 
    {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
            return !std::isalnum(c);
        }), s.end());
        std::string reversed(s.rbegin(), s.rend());
        return s == reversed;
    }
};