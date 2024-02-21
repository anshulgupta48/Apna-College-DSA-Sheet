// ******** Given an integer array nums, find a subarray that has the largest product, and return the product. The test cases are generated so that the answer will fit in a 32-bit integer. ********

// <======== Example ========>
// Input: nums = [2,3,-2,4]
// Output: 6

// Input: nums = [-2,0,-1]
// Output: 0




class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int product = 1;

        for(int i = 0; i < n; i++) {
            product *= nums[i];
            maxi = max(product, maxi);
            if(product == 0) {
                product = 1;
            }
        }

        product = 1;
        for(int i = n-1; i >= 0; i--) {
            product *= nums[i];
            maxi = max(product, maxi);
            if(product == 0) {
                product = 1;
            }
        }

        return maxi;
    }
};