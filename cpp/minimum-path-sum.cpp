class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size()));
        if(grid.size()==0)
            return 0;
        dp[0][0] = 0; 
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i==0 && j==0)
                    dp[i][j] = grid[0][0]; 
                else if(i-1<0)
                    dp[i][j] = dp[i][j-1] + grid[i][j];
                else if(j-1<0)
                    dp[i][j] = dp[i-1][j] + grid[i][j];
                else
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            }
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};
