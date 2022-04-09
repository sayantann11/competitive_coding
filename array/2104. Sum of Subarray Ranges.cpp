class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int maxi = nums[i];
            int mini = nums[i];
            for(int j=i-1;j>=0;j--)
            {
                mini =min(mini,nums[j]);
                maxi = max(maxi,nums[j]);
                ans = ans+(maxi-mini);
            }
            
        }
        return ans;
        
        
    }
};




