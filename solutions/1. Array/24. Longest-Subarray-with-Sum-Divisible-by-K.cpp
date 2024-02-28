// ******** Given an arr[] containing n integers and a positive integer k. The problem is to find the longest subarray’s length with the sum of the elements divisible by the given value k. ********

// <======== Example ========>
// Input: arr[] = {2, 7, 6, 1, 4, 5}, k = 3
// Output: 4 

// Input: arr[] = {-2, 2, -5, 12, -11, -1, 7}, k = 3
// Output: 5




class Solution {
public:
    int longestSubarrWthSumDivByK(int arr[], int N, int k) {
        int maxl=0;
        for(int i = 0; i < N; i++) {
            int sum1 = 0;
            for(int j = i; j < N; j++) {
                sum1 += arr[j];
                if(sum1 % k == 0) {
                    maxl = max(maxl , j-i+1);
                } 
            }
        }
 
        return maxl;
    }
};
