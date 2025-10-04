class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> results;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i

            unordered_set<int> seen;
            for (int j = i + 1; j < n; j++) {
                int third = -(nums[i] + nums[j]);

                if (seen.count(third)) {
                    results.push_back({nums[i], nums[j], third});

                    // skip duplicates for nums[j]
                    while (j + 1 < n && nums[j] == nums[j + 1]) j++;
                }
                seen.insert(nums[j]);
            }
        }

        // remove duplicate triplets caused by order mismatch
        for (auto &triplet : results) {
            sort(triplet.begin(), triplet.end());
        }
        sort(results.begin(), results.end());
        results.erase(unique(results.begin(), results.end()), results.end());

        return results;
    }
};
