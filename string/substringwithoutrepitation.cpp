class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            vector<bool>vis(256);
            for(int j=i;j<n;j++)
            {
                if(vis[s[j]]==true)
                    break;
                else
                {
                    ans = max(ans,j-i+1);
                    vis[s[j]]=true;
                }
                
                    
            }
         vis[s[i]]==false;   
        }
        return ans;
        
    }
};
