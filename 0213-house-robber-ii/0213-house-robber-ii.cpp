class Solution {
public:
 int dp[105];
   int solve(int i,int n,vector<int>& nums){
    if(i>n) return 0;
  
    if (dp[i]!=-1) return dp[i];

    int steal = nums[i] + solve (i+2,n,nums);
    int skip = solve(i+1,n,nums);
     return dp[i] = max(steal, skip);
   }


    int rob(vector<int>& nums) {
       int n = nums.size();
       if(n==1) return nums[0];
       if(n==2) return max(nums[0],nums[1]);

       memset(dp,-1,sizeof(dp));

       int case1 = solve(0,n-2,nums);

        memset(dp,-1,sizeof(dp));
       int case2 = solve(1,n-1,nums);

       return max(case1,case2);
      
    }
};