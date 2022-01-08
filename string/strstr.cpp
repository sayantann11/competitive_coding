Implement StrStr
Implement strStr().

 strstr - locate a substring ( needle ) in a string ( haystack ). 
Try not to use standard library string functions for this question.

Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 NOTE: Good clarification questions:
What should be the return value if the needle is empty?
What if both haystack and needle are empty?
For the purpose of this problem, assume that the return value should be -1 in both cases. 



solutions:
int Solution::strStr(const string A, const string B) {
   int n = A.size();
   int m = B.size();
   int i=0;
   int j=0;
   int o = i;
   while(o<n&&j<m)
   {
       if(A[o]==B[j])
       {
         o++;
         j++;
         
       }
       else
       {
           j=0;
           o=++i;
       }
       if(j==m)
       return i;
   }
   return -1;
   
}


//eabeabcd
//abc
