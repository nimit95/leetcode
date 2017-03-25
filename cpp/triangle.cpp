class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==0)
            return 0;
        vector<vector<int>> dp(2, vector<int>(triangle.size()+2, INT_MAX));
        dp[0][0] = triangle[0][0];
        int curr  = 1;
        for(int i=1;i<triangle.size();i++)
        {
            for(int j=0;j<triangle[i].size();j++){
                if(j==0){//cout<<"yo"<<dp[curr^1][j+1];
                    dp[curr][j] = min(dp[curr^1][j],INT_MAX) + triangle[i][j];}
                else{
                    dp[curr][j] = min(INT_MAX, min(dp[curr^1][j], dp[curr^1][j-1]))  + triangle[i][j];}
                cout<<dp[curr][j]<<" ";
            }
            cout<<endl;
            curr = curr^1;
        }
        int mini=INT_MAX;
        curr = curr ^1;
        for(int i=0;i<triangle.size();i++)
            mini = min(mini,dp[curr][i]);
        return mini;
    }
};
