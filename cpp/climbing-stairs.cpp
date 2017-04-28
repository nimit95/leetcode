class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3;i<n+1;i++)
            dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};
