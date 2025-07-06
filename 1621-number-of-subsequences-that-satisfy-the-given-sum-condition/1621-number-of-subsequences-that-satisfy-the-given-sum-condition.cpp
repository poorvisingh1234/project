class Solution {
public:
    int mod = 1e9 + 7;

    // Function to precompute powers of 2 modulo mod
    vector<int> precomputePowers(int n) {
        vector<int> power(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            power[i] = (power[i - 1] * 2) % mod;
        }
        return power;
    }

    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // sort array
        int n = nums.size();
        vector<int> power = precomputePowers(n); // precompute 2^x mod

        int result = 0;

        for (int i = 0; i < n; ++i) {
            int low = i, high = n - 1, valid = -1;

            // Binary search for the furthest j where nums[i] + nums[j] <= target
            while (low <= high) {
                int mid = (low + high) / 2;
                if (nums[i] + nums[mid] <= target) {
                    valid = mid;
                    low = mid + 1; // try to go further
                } else {
                    high = mid - 1; // reduce range
                }
            }

            // If valid is found and i <= valid, then count subsequences
            if (valid >= i) {
                result = (result + power[valid - i]) % mod;
            }
        }

        return result;
    }
};