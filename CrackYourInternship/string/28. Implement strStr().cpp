class Solution {
public:
    int strStr(string A, string B) {
        int n = A.size();
        int m = B.size();
        
        for(int i=0;i<=n-m;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                if(B[j]==A[j+i])
                {
                    count++;
                }
            }
            if(count == m)
            {
                return i;
            }
        }
        return -1;
    }
};
