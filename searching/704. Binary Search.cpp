class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int l=nums[0];
        int h = nums.size();
        while(i<nums.size())
        {
            if(nums[i]==target)
               return i;
           else if(target>nums[nums.size()/2])
            {
                l = h/2;
                i++;
            }
            else 
               {
                   h = h/2;
                   i++;
               }
               
               
        }
               
        return -1;
    }
};
