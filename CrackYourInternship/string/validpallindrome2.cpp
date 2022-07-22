class Solution {
public:
    bool ispalin(string s)
    {
        int end = s.size()-1;
        int start = 0;
        while(start<=end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
               return false;
            }
        }
        return true;
        
    }
    bool validPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end)
        {
            if(s[start]==s[end])
            {
                start++;
                end--;
            }
            else
            {
                char a = s[start];
                s.erase(s.begin()+start);
                bool ans = ispalin(s);
                if(ans==true)
                {
                    return true;
                }
                s.insert(s.begin()+start,a);
                s.erase(s.begin()+end);
                ans = ispalin(s);
                if(ans==true)
                {
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
