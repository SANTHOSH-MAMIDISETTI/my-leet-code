/*
Intuition:
Use binary search to efficiently find the target in a sorted array.
- Start with low = 0 and high = nums.size() - 1.
- Calculate mid = low + (high - low) / 2 to avoid overflow.
- If nums[mid] == target, return mid immediately.
- If nums[mid] < target, move low up to mid + 1 (search right half).
- If nums[mid] > target, move high down to mid - 1 (search left half).
Repeat until low > high (target not found).
This halves the search space each step, making the search O(log n).
*/
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high)
        {
            // Calculate mid to avoid potential overflow 
            // (generally happens for large numbers)
            int mid = low + (high - low) / 2;

            if(nums[mid] == target)
            {
                return mid;  
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;  
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;  
    }
};
