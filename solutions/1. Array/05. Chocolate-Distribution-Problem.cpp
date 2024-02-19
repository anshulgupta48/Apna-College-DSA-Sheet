// ******** Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: Each student gets one packet. The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum. ********

// <======== Example ========>
// Input: arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: 2

// Input: arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
// Output: 6

// Input: arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
// Output: 10




class Solution {
public:
    int findMinDiff(int arr[], int n, int m) {
        if (m == 0 || n == 0) {
            return 0;
        }
        
        int min_diff = INT_MAX;
        sort(arr, arr + n);
        if (n < m) {
            return -1;
        }
        
 
        for (int i = 0; i+m-1 < n; i++) {
            int diff = arr[i+m-1] - arr[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        return min_diff;
    }
};