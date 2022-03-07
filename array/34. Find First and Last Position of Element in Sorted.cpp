class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>coord(2, -1);
        if(nums.size() == 0) return coord;
        int i=0;
        while(i < nums.size()){
            if(nums[i] == target) break;
            i++;
        }
        if(i != nums.size())
            coord[0] = i;
        while(i < nums.size()-1){
            if(nums[i] != nums[i+1])
                break;
            i++;
        }
         if(i != nums.size())
            coord[1] = i;
        return coord;
    }
};
