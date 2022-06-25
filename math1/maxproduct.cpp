class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       int temp1 = nums[n-1]*nums[n-2]*nums[n-3];
       int temp2 = nums[0]*nums[1]*nums[n-1];
       return temp1>temp2? temp1 : temp2;
    }
};
