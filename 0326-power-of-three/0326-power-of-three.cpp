class Solution {
public:
    bool isPowerOfThree(int n) {
        // Time Complexity: O(1) → Only a few math operations
    // Space Complexity: O(1) → No extra space used
    if (n <= 0) return false;
    double logVal = log10(n) / log10(3);
    return floor(logVal) == logVal;
    }
};

// bool isPowerOfThree(int n) {
//     // Time Complexity: O(log₃n) → Same as iterative, because n is divided by 3 each call
//     // Space Complexity: O(log₃n) → Due to recursion call stack
//     if (n <= 0) return false;
//     if (n == 1) return true;
//     if (n % 3 != 0) return false;
//     return isPowerOfThree(n / 3);
// }


// bool isPowerOfThree(int n) {
//     // Time Complexity: O(log₃n) → Because we divide n by 3 each iteration
//     // Space Complexity: O(1) → No extra space used
//     if (n <= 0) return false;
//     while (n % 3 == 0) {
//         n /= 3;
//     }
//     return n == 1;
// }
