// ******** Given an array of numbers, arrange them in a way that yields the largest value. For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value. And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 gives the largest value. ********

// <======== Example ========>
// Input: X = 542, Y = 60
// Output: we compare 54260 and 60542. Since 60542 is greater than 54260, we put Y first.




class Solution {
public:
    int myCompare(string X, string Y) {
        string XY = X.append(Y);
        string YX = Y.append(X);
        
        return XY.compare(YX) > 0 ? 1 : 0;
    }
};