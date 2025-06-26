class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;  
    }

   // Binary: 16 → 10000

//n > 0 → true

//n - 1 = 15 → 01111

//10000 & 01111 = 00000 → ✅
//✅ true is returned


};

//brute force- loop till i<30,,, check pow(2,i) = n

//log method 

// bool isPowerOfTwo(int n) {
//     if (n <= 0) return false;
//     double logVal = log2(n);
//     return floor(logVal) == logVal;
// }


//recursion
// bool isPowerOfTwo(int n) {
//     if (n <= 0) return false;
//     if (n == 1) return true;
//     if (n % 2 != 0) return false;
//     return isPowerOfTwo(n / 2);
// }
