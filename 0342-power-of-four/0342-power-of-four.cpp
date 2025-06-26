class Solution {
public:
    bool isPowerOfFour(int n) {
         return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555);
         //(n & 0x55555555) — This mask ensures that the only set bit is in an even position

         //bitmask for odd position will be 0xAAAAAAAA 

         //Binary:     0 0 0 0  0 0 1 0
         //Bit Index:  7 6 5 4  3 2 1 0
    }
}; //  // Time Complexity: O(1)
    // Space Complexity: O(1)



// bool isPowerOfFour(int n) {
//     // Time Complexity: O(1)
//     // Space Complexity: O(1)
//     if (n <= 0) return false;
//     double logVal = log10(n) / log10(4);
//     return floor(logVal) == logVal;
// }
// Note: May suffer from floating-point precision issues like 4.9999 will not b eqaul to 5.

