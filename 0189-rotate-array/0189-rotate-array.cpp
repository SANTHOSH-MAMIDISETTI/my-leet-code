class Solution {
public:
//     O(n) time & O(n) space
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector <int> sol(n);
        for(int i=0;i<n;i++)
        {
            sol[(i+k)%n]=nums[i];
        }
        nums=sol;
    }
};