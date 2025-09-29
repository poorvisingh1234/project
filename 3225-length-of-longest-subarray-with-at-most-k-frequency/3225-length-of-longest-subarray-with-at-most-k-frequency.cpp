class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        int i =0;
        int j=0;
        int maxL = 0;

        for(j = 0; j < n; j++){
            freq[nums[j]]++;
            while (freq[nums[j]]>k){
               
                freq[nums[i]]--;
                i++;
            }

             maxL = max (maxL,j-i+1);
        }

        return maxL;
        
    }
};