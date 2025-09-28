class Solution {
public:

    
    int solve(int n,vector<int>& dp){
        
        if (n<0) return 0;
        if (n==0) return 1;

        if (dp[n]!=-1){
            return dp[n];
        }

        int first_step = solve(n-1,dp);
        int second_step = solve(n-2,dp);

        return dp[n] = first_step + second_step ;
    }

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};