// ******** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct. ********

// <======== Example ========>
// Input: nums = [1,2,3,1]
// Output: true

// Input: nums = [1,2,3,4]
// Output: false

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true




class Solution{
    public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for(auto x: mp) {
            if(x.second > 1) {
                return true;
            }
        }

        return false;
    }
};