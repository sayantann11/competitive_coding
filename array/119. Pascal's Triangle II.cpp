class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> dp((n + 1), vector<int> (n + 1 , 0));
        
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0)
                    dp[i][j] = 1;
                
                else if(i == j)
                    dp[i][j] = 1;
                
                else
                {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }
            }
        }
        
        vector<int> res;
        
        for(int j = 0; j <= n; j++)
        {
            res.push_back(dp[n][j]);
        }
        
        return res;
        
    }
};
