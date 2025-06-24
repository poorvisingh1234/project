class Solution {
public:
    // This helper function will compute the minimum number of perfect squares that sum to 'n'
    int helper(int n, vector<int>& memo) {
        // Base Case: If n is 0, no numbers are needed to make the sum
        if (n == 0) return 0;

        // If we have already computed the result for n, return it
        if (memo[n] != -1) return memo[n];

        int minCount = INT_MAX; // Start with a very large number

        // Try all perfect squares less than or equal to n
        for (int i = 1; i * i <= n; ++i) {
            int square = i * i; // current perfect square, like 1, 4, 9, 16, ...

            // We use this square once, and recursively solve for the rest (n - square)
            int remaining = helper(n - square, memo); //If you don’t pass memo, each function will get a separate copy (or nothing), and you lose your history.

//By passing memo to every recursive call, you make sure all versions of helper() are looking at the same cache.

            // Take the minimum of all the possible options
            minCount = min(minCount, 1 + remaining); //(1 here becz we r adding to prev )
        }

        // Store the computed result in memo table before returning
        memo[n] = minCount;
        return minCount;
    }

    // This is the main function called with the given 'n'
    int numSquares(int n) {
        // Create a memoization table initialized to -1 (meaning uncomputed)
        vector<int> memo(n + 1, -1);

        // Call the helper function to solve the problem
        return helper(n, memo);
    }
};


  