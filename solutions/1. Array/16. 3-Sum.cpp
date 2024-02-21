// ******** Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0. Notice that the solution set must not contain duplicate triplets. ********

// <======== Example ========>
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

// Input: nums = [0,1,1]
// Output: []

// Input: nums = [0,0,0]
// Output: [[0,0,0]]




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> ans;

        for(int i = 0; i < n-2; i++) {
            int start = i+1, end = n-1;
            while(start < end) {
                if(nums[i] + nums[start] + nums[end] < 0) {
                    start++;
                }
                else if(nums[i]+ nums[start] + nums[end] > 0) {
                    end--;
                }
                else {
                    set.insert({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                }
            }
        }

        for(auto x: set) {
            ans.push_back(x);
        }

        return ans;
    }
};