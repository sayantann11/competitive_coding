class Solution {
public:
    
    string longestPalindrome(string s) {
        if (s.length()-1 == 0)
        {
            return s;
        }
        string ans="";
        int l,h;
        int end=1,start=0;
        for(int i=1;i<s.length();i++)
        {
            //case1
            l = i-1;
            h = i;
            while(l>=0&&h<s.length()&&s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start = l;
                    end = h-l+1;
                }
                l--;
                h++;
            }
            //case2
            l = i-1;
            h = i+1;
            while(l>0&&h<s.length()&&s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start = l;
                    end = h-l+1;
                }
                l--;
                h++;
            }
            
        }
        for(int j =start;j<=end;j++)
        {
            ans.push_back(s[j]);
        }
        return ans;
    }
};
