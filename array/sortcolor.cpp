class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        for(int i=0;i<=r;i++)
        {
            if(nums[i]<1)
            {
                swap(nums[i],nums[l]);
                l++;
            }
            else if(nums[i]>1)
            {
                swap(nums[i],nums[r]);
                r--;
                i--;
            }
        }
    }
};
