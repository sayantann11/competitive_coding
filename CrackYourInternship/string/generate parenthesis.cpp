class Solution {
public:
    void findall(string current,int o,int c,vector<string>&result,int n)
    {
        if(current.length()==2*n)
        {
            result.push_back(current);
        }
        
        
        if(o<n)
        {
            findall(current+"(",o+1,c,result,n);
            
        }
        if(c<o)
        {
            findall(current+")",o,c+1,result,n);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        findall("(",1,0,ans,n);
        return ans;
        
    }
};
