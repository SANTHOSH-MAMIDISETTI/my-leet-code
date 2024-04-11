class Solution {
public:
    //     NOT THE CORRECT WAY (done using DIVISION operator)
vector<int> productExceptSelf(std::vector<int>& nums) {
    int product = 1;
    int zeroCount = 0;  // Count of zeros in the input
    vector<int> answer(nums.size(), 0);  // Initialize answer with zeros

    // Calculate the product of all non-zero elements
    for (int num : nums) {
        if (num != 0) {
            product *= num;
        } else {
            zeroCount++;
        }
    }

    // If there are multiple zeros, the entire result will be zeros
    if (zeroCount > 1) {
        return answer;
    }

    // Calculate the result using division
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            answer[i] = zeroCount == 0 ? product / nums[i] : 0;
        } else {
            answer[i] = product;
        }
    }

    return answer;
}

};