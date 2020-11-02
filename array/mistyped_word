Mistyped Words
Problem Description

There is a big sentence but all the occurrences of the word hello (not substring) were mistyped as gelo and gelo was not in the original sentence. Correct the sentence.



Problem Constraints
1 <= |A| <= 1000


Input Format
The first and only argument contains a string A of lowercase english letters and spaces denoting the sentence.


Output Format
Return the corrected string


Example Input
Input 1:

  "gelo world"
Input 2:

  "gelo higelo gelo"


Example Output
Output 1:

  "hello world"
Output 2:

  "hello higelo hello"


Example Explanation
Explanation 1:

  hello world was mistyped as gello world.
Explanation 1:

  higelo was not changed to hihello as it is present as a substring.
  
  
  
  
  
  
  solutions:
  string Solution::solve(string A) {
    vector<string>words;
    stringstream check1(A);
    string ss
    while(getline(check1,ss,' '))
    {
        words.push_back(ss);
    }
    string ans = "";
   
    for(int i = 0;i<words.size();i++)
    {
        string word = words[i];
        if(word =="gelo")
        {
            word = "hello";
        }
        ans+=word;
        if(i!=words.size()-1)
        {
            ans +=" ";
        }
    }
    return ans;
    
    
}
