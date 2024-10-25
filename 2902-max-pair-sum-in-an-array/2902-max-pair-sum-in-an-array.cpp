class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int, vector<int>> DigitMap;

        for (int num : nums) {
            int Largest = MaxDigit(num);
            DigitMap[Largest].push_back(num);
        }

        int maxSum = -1;

        for (const auto& entry : DigitMap) {
            const auto& keys = entry.second;
            if (keys.size() > 1) {
                vector<int> temp(keys);
                sort(temp.begin(), temp.end(), greater<int>());
                int sum = temp[0] + temp[1];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }

private:
    int MaxDigit(int number) {
        int Largest_num = 0;
        while (number > 0) {
            int digit = number % 10;
            Largest_num = max(Largest_num, digit);
            number /= 10;
        }
        return Largest_num;
    }
};
// Time Complexity O(N∗Log(N))