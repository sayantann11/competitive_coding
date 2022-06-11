class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
    }
};


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>ans(100001,0);
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
            if(ans[nums[i]]==2) return nums[i];
        }
        return -1;
    }
};



