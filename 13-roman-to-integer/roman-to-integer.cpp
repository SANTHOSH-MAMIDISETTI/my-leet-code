// class Solution {
// public:
//     int romanToInt(string s) {
//         int ans=0;
//         unordered_map <char,int> mp{
//         {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

//     for(int i=0;i<s.size();i++){
//         if(mp[s[i]]<mp[s[i+1]]){
//             //for cases such as IV,CM, XL, etc...
//             ans=ans-mp[s[i]];
//         }
//         else{
//             ans=ans+mp[s[i]];
//         }
//     }
//         return ans;
//     }
// };

class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int result = 0;
        for(int i=0;i<s.length();i++)
        {
            // cout<<mp.at(s[i])<<endl;
            if(i+1 < s.length() && mp.at(s[i])<mp.at(s[i+1]))
            {
                result -= mp.at(s[i]);
            }
            else
            {
                result += mp.at(s[i]);
            }
        }
    return result;
    }
};