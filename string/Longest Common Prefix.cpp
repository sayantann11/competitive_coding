class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
int min = INT_MIN;

//if no string rt empty str
if (n == 0)
    return "";  

//if 1 string rt that str
if (n == 1)
{
    return strs[0];
}

//count the length of smallest str
for(auto i: strs){
    if (i.size()<min)
    {
        min = i.size();
    }
}

string res = "";

//concat with resultant str with the matched common prefix

for(int i = 0; i< min; i++){
    char c = strs[0][i];
    for(int j = 1; j<n; j++){
        if (c!=strs[j][i])
            return res;
    }
    res+= c;
}

return res;
    }
};
