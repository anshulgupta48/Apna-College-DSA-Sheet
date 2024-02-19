// ******** You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. ********

// <======== Example ========>
// Input: prices = [7,1,5,3,6,4]
// Output: 5

// Input: prices = [7,6,4,3,1]
// Output: 0




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int i = 0;
        int j = 1;

        while(j < n) {
            if(prices[j] < prices[i]) {
                i = j;
            }
            else {
                maxProfit = max(maxProfit, prices[j] - prices[i]);
            }

            j++;
        }

        return maxProfit;
    }
};