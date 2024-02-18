// ******** Array reverse or reverse a array means changing the position of each number of the given array to its opposite position from end, i.e. if a number is at position 1 then its new position will be Array.length, similarly if a number is at position 2 then its new position will be Array.length – 1, and so on. ********

// <======== Example ========>
// Input: arr = [1, 2, 3]
// Output: arr = [3, 2, 1]

// Input: arr = [4, 5, 1, 2]
// Output: arr = [2, 1, 5, 4]




void reverseArray(int arr[]) {
    int n = arr.size();
    for(int i = 0; i < n/2; i++) {
        swap(arr[i], arr[n-i-1]);
    }
}