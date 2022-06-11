class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                    ans.push_back(nums[j]);
            }
        }
    nums=ans;
        
    }
};



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0;
        int mid=0;
        int n =nums.size();
        int high = n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[lo]);
                lo++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
    }
};
