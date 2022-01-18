class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans, store(1001,0);
        for(auto i:nums1)
        {
            store[i]++;
        }
        for(auto i:nums2)
        {
            if(store[i]-->0) 
                ans.push_back(i);
        }
        return ans;
    }
};
