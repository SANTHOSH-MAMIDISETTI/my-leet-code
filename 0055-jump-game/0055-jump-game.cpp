class Solution {
public:
//     GREEDY O(n) time O(1) space
    bool canJump(vector<int>& nums) {
        int goal = nums.size()-1;
        bool goalB;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i+nums[i]>=goal)
            goal =i;
        }
        if(goal==0)
        {
            goalB = true;
        }
        else
        {
            goalB = false;
        }
        return goalB;
    }
};