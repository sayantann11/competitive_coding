class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int n : nums){
            ma[n]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(ma[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};
