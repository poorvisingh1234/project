class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minL= INT_MAX;
        int i = 0;
        int j = 0;
        int sum = 0;

        for(j = 0;j<nums.size();j++){

            sum += nums[j];

            while(sum>=target){
                minL = min(minL,j - i + 1);
                sum -= nums[i];
                i++;
            }
        }

        return (minL==INT_MAX)?0:minL;
    }
};