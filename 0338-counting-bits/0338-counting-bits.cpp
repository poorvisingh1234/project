class Solution {
public:
    vector<int> countBits(int n) {
  // Initialize a result vector of size n+1 with all elements as 0
    vector<int> ans(n + 1, 0);

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // ans[i >> 1] gives the number of 1s in i/2
        // (i & 1) adds 1 if the least significant bit is 1 (i.e., i is odd), else 0
        ans[i] = ans[i >> 1] + (i & 1);
        // Example: i = 5 (101) => i >> 1 = 2 (10), ans[5] = ans[2] + 1 = 1 + 1 = 2
    }

    return ans;
    }
};

//i >> 1
//This is right shift, same as integer division by 2 (dropping last bit).

// Left Shift <<
// Syntax: x << k

// Meaning: Move all bits of x left by k positions

// Effect: Equivalent to multiplying by 2^k (for non-overflowing values)

//time and space complexity- o(n)