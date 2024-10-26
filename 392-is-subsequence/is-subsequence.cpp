// My idea is to take the smaller string s and look for it within the larger string t, only in a forward direction. For example, if s = "anad" and t = "asaenereadf", we start with the first character of s (which is 'a') and search through t until we find it. Once we find 'a', we move to the next character in s, which is 'n', and continue searching for it in t from the index just after where we found the previous character. We repeat this process for all characters in s. If we reach the end of t before finding all the characters in s, we return false. However, if we find all the characters of s in order within t, we return true.
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length() > t.length())
        {
            return false;
        }
        int left=0;
        for(int i=0;i<t.length();i++)
        {
            if(left<s.length() && s[left]==t[i])
            {
                left++;
            }
        }
    return left == s.length();
    }
};
