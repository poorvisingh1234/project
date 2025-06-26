class Solution {
public:
    bool isPowerOfFour(int n) {
         return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555);
         //(n & 0x55555555) — This mask ensures that the only set bit is in an even position

         //bitmask for odd position will be 0xAAAAAAAA 

         //Binary:     0 0 0 0  0 0 1 0
         //Bit Index:  7 6 5 4  3 2 1 0
    }
};