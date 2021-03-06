class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> dp(m+1,0);
        //for(int i = 0;i<=m;i++)
          //  dp[i] = 0;
        for(int i = m-1;i>=0;i--)
        {
            for(int j = 0;j<triangle[i].size();j++)
            {
                dp[j] = min(dp[j],dp[j+1]) + triangle[i][j];
            }
        }
        return dp[0];
    }
};