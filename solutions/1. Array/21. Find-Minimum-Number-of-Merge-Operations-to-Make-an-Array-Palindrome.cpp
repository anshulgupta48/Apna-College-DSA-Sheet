// ******** Given an array of positive integers. We need to make the given array a ‘Palindrome’. The only allowed operation is”merging” (of two adjacent elements). Merging two adjacent elements means replacing them with their sum. The task is to find the minimum number of merge operations required to make the given array a ‘Palindrome’. ********

// <======== Example ========>
// Input: arr[] = {15, 4, 15}
// Output: 0

// Input: arr[] = {1, 4, 5, 1}
// Output: 1

// Input: arr[] = {11, 14, 15, 99}
// Output: 3




class Solution {
public:
    int findMinOps(int arr[], int n) {
        int ans = 0;
        for (int i=0, j=n-1; i <= j;) {
            if (arr[i] == arr[j]) {
                i++;
                j--;
            }
            else if (arr[i] > arr[j]) {
                j--;
                arr[j] += arr[j+1];
                ans++;
            }
            else {
                i++;
                arr[i] += arr[i-1];
                ans++;
            }
        }
 
        return ans;
    }
};