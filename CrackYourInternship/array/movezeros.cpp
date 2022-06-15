class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = 0;
        int high = 0;
        while(high<nums.size())
        {
            if(nums[high]==0)
            {
                high++;
            }
            else
            {
                swap(nums[high],nums[low]);
                    low++;
                    high++;
            }
        }
    }
};
