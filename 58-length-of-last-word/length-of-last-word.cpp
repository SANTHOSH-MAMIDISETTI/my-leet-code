// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int count = 0;
//         int n = s.length();
//         int i = n - 1;

//         // Skip trailing spaces
//         while (i >= 0 && s[i] == ' ') {
//             i--;
//         }

//         // Count characters of the last word
//         while (i >= 0 && s[i] != ' ') {
//             count++;
//             i--;
//         }

//         return count;
//     }
// };

class Solution {
public:
    int lengthOfLastWord(string s) 
    {   
        int length =0;
        for(int i = s.length()-1;i>=0;i--)
        {
            if(s[i]== ' ')
            {
                if(length >0)
                {
                    break;
                }
            }
            else
            {
                length++;
            }
        }
    return length;
    }
};