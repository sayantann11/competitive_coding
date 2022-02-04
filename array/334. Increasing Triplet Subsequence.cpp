class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    
        int n=nums.size();
        vector<bool> inc(n,false);
        vector<bool> dec(n,false);
        stack<int> st;
        int i=0;
        while(i<n)
        {
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                 while(!st.empty() && nums[st.top()]<nums[i])
                 {
                     dec[st.top()]= true;
                     st.pop();
                 }
                st.push(i);
            }
            i++;
        }
         
        i=n-1;
        
        while(!st.empty())
        {
            st.pop();
        }
            
        
        while(i>=0)
        {
             if(st.empty())
            {
                st.push(i);
            }
            else
            {
                 while(!st.empty() && nums[st.top()]>nums[i])
                 {
                     inc[st.top()]= true;
                     st.pop();
                 }
                st.push(i);
            }
            i--;
        }
        
         for(int i=0;i<n;i++)
         {
             if(inc[i]==true && dec[i]==true)
                 return true;
         }
        
        return false;
            
    }
};
