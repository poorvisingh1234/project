class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int max_sum = nums[0];

        for(int i=0;i<nums.size();i++){
            current_sum = max(nums[i],nums[i]+current_sum);
            max_sum = max(max_sum,current_sum);
        }

        return max_sum;
    }
};