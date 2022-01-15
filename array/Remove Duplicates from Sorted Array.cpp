class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        

        if(!nums.size())
            return 0;
        
        int iter=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[iter]=nums[i-1];
                iter++;
            }
        }
        
        
            nums[iter]=nums[nums.size()-1];  //insertion of last element
        
        
        return iter+1;
    }
};
