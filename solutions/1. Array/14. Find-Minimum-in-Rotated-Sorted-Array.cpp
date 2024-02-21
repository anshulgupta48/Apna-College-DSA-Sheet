// ******** Given the sorted rotated array nums of unique elements, return the minimum element of this array. You must write an algorithm that runs in O(log n) time. ********

// <======== Example ========>
// Input: nums = [3,4,5,1,2]
// Output: 1

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0

// Input: nums = [11,13,15,17]
// Output: 11




class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = INT_MAX;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[start] <= nums[mid]) {
                ans = min(ans, nums[start]);
                start = mid + 1;
            }
            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }

        return ans;
    }
};