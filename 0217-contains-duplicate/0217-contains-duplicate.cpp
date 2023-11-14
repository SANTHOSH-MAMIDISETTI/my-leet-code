class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i:nums)
        {
            set.insert(i);
        }
        if(set.size()==nums.size())
        {
            return false;
        }
    return true;
    }
};