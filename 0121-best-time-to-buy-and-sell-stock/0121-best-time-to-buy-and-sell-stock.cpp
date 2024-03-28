// class Solution {
// public:
// //      time complexity of O(n) and a space complexity of O(1)
//     int maxProfit(vector<int>& prices) {
//         if (prices.empty()) {
//             return 0; // If prices vector is empty, return 0 profit
//         }

//         int lowest = prices[0];
//         int maxProfit = 0;

//         // Find the lowest price and calculate the maximum profit
//         for(int i = 0; i < prices.size(); i++) {
//             if(prices[i] < lowest) {
//                 lowest = prices[i];
//             } else if (prices[i] - lowest > maxProfit) {
//                 maxProfit = prices[i] - lowest;
//             }
//         }

//         return maxProfit;
//     }
// };
class Solution {
public:
//     SLIDING WINDOW
//      time complexity of O(n) and a space complexity of O(1)
    int maxProfit(vector<int>& prices) {
        int buy =0, sell =1, maxProfit =0;
        while (sell<prices.size())
        {
            if(prices[buy]<prices[sell])
            {
                int profit = prices[sell]-prices[buy];
                maxProfit = max(profit,maxProfit);
            }
            else
            {
                buy = sell;
            }
            sell++;
        }
        return maxProfit;
    }
};