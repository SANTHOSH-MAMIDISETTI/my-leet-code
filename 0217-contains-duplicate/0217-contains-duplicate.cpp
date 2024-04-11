class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> sol;
        bool status;
        for(int i:nums)
        {
            sol.insert(i);
        }
        if(nums.size()==sol.size())
        {
            status = false;
        }
        else
        {
            status = true;
        }
        return status;
    }
};