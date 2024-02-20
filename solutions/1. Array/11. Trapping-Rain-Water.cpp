// ******** Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining. ********

// <======== Example ========>
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6

// Input: height = [4,2,0,3,2,5]
// Output: 9




class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = INT_MIN, rightMax = INT_MIN;
        int ans = 0;

        while(left < right) {
            leftMax = max(leftMax, height[left]);
            rightMax = max(rightMax, height[right]);
            ans += (leftMax < rightMax) ? leftMax-height[left++] : rightMax-height[right--];
        }

        return ans;
    }
};