// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int i=0;
//         while(i<nums.size())
//         {
//             if(val==nums[i])
//             {
//                 nums.erase(nums.begin()+i);
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return nums.size();
//     }
// };
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[left]=nums[i];
                left++;
            }
        }
        return left;
    }  
};