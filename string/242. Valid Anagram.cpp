class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
         vector<int>m(26,0);
        for(int i=0;i<t.size();i++)
        {
            m[t[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]-'a']==0)
                return false;
            m[s[i]-'a']--;
        }
        return true;
        
    }
};
