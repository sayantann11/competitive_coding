class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cs = nums[0];
        int gs = nums[0];
        
        for(int i=1;i<n;i++)
        {
            cs = max(cs+nums[i],nums[i]);
            gs = max(gs,cs);
            
        }
        return gs;
        
    }
};
