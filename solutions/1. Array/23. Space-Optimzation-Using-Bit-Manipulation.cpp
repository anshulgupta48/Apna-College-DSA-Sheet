// ******** Given two numbers say a and b, mark the multiples of 2 and 5 between a and b using less than O(|b – a|) space and output each of the multiples. ********

// <======== Example ========>
// Input: 2 10
// Output: 2 4 5 6 8 10

// Input: 60 95
// Output: 60 62 64 65 66 68 70 72 74 75 76 78 80 82 84 85 86 88 90 92 94 95




class Solution {
public:
    bool checkbit(int array[], int index) {
        return array[index >> 5] & (1 << (index & 31));
    }
    
    void setbit(int array[], int index) {
        array[index >> 5] |= (1 << (index & 31));
    }
};