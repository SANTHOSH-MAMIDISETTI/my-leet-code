// class Solution {
// public:
// //     O(n) time & O(n) space
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k%n;
//         vector <int> sol(n);
//         for(int i=0;i<n;i++)
//         {
//             sol[(i+k)%n]=nums[i];
//         }
//         nums=sol;
//     }
// };
class Solution {
    public:
    // O(n) time and O(1) space
    void rotate(vector<int>& nums, int k) {
            k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};