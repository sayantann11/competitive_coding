class Solution {
public:
unordered_map<char, string> mp = {
{'2', "abc"},
{'3', "def"},
{'4', "ghi"},
{'5', "jkl"},
{'6', "mno"},
{'7', "pqrs"},
{'8', "tuv"},
{'9', "wxyz"}
};

void solve(int idx,string digits,vector<string>&res, string &s)
{
    if(idx==digits.size())
    {
        res.push_back(s);
        return;
    }

    for(int i=0;i<mp[digits[idx]].size();i++)
    {
        s.push_back(mp[digits[idx]][i]);
        solve(idx+1,digits,res,s);
        s.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    
    int n = digits.size();
    vector <string> res;
    if(digits=="")
        return res;
    
    string s="";
    solve(0,digits,res,s);
    
    return res;
}
};
