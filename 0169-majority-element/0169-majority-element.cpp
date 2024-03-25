// class Solution {
//  O(n log n) --> time , O(n) --> space
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         return (nums[nums.size()/2]);
//     }
// };
// class Solution {
//     using hashmap O(n) --> Space and time
// public:
    // int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> umap;
//         for(int i:nums)
//         {
//             umap[i]++;
//         }
//         int max_fr = nums.size()/2;
//         for(auto j:umap)
//         {
//             if(j.second>max_fr)
//                 return j.first;
//         }
//         return 0;
//     }
// };
class Solution {
//     using Moore Voting Algorithm O(1) --> Space and O(n) time
public:
    int majorityElement(vector<int>& nums) {
        int count =0,element=0;
        for(int i:nums)
        {
            if(count==0)
            {
                element = i;
            }
            if(i==element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
    }
};      