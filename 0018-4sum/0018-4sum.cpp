class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); // added for duplicate handling

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicate j

                int l = j + 1;
                int k = n - 1;

                while (l < k) {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[k];

                    if (sum < target) {
                        l++;
                    } else if (sum > target) {
                        k--;
                    } else {
                        result.push_back({nums[i], nums[j], nums[l], nums[k]});

                        while (l < k && nums[l] == nums[l + 1]) l++; // skip duplicate l
                        while (l < k && nums[k] == nums[k - 1]) k--; // skip duplicate k

                        l++;
                        k--;
                    }
                }
            }
        }

        return result;
    }
};
