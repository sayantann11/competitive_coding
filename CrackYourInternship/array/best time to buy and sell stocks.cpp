class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_sum=0;
        int min_a=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            min_a = min(min_a,prices[i]);
            int profit = prices[i]-min_a;
            max_sum = max(profit,max_sum);
        }
            return max_sum;        
    }
};



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = INT_MIN;
        int cur;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(prices[i]<prices[j])
                {
                    cur = prices[j]-prices[i];
                    ans = max(ans,cur);
                }
                else
                {
                    continue;
                }
            }
        }
        return ans;
        
    }
};
