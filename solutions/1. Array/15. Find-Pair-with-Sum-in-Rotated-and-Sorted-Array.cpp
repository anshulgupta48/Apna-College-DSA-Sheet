// ******** Given an array arr[] of distinct elements size N that is sorted and then rotated around an unknown point, the task is to check if the array has a pair with a given sum X. ********

// <======== Example ========>
// Input: arr[] = {11, 15, 6, 8, 9, 10}, X = 16
// Output: true

// Input: arr[] = {11, 15, 26, 38, 9, 10}, X = 35
// Output: true

// Input: arr[] = {11, 15, 26, 38, 9, 10}, X = 45
// Output: false




class Solution {
public:
    bool pairInSortedRotated(int arr[], int n, int x) {
        int i;
        for (i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i+1]) {
                break;
            }
        }

        int l = (i + 1) % n;
        int r = i;
        while (l != r) {
            if (arr[l] + arr[r] == x) {
                return true;
            }
            else if (arr[l] + arr[r] < x) {
                l = (l + 1) % n;
            }
            else {
                r = (n + r - 1) % n;
            }
        }

        return false;
    }
};