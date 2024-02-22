// ******** Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input. ********

// <======== Example ========>
// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]




class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for(int i = 0; i < n; i++) {
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            }
            else {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
        }

        return ans;
    }
};