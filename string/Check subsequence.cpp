Check subsequence
Problem Description

Write a recursive function that, given two strings A and B, return 1 if the first string A is a subsequence of the second string B.

For example, given "hac" and "cathartic", you should return 1, but given "bat" and "table", you should return 0.



Problem Constraints
1 <= |A| <= |B| <= 50000



Input Format
First argument is a string A.

Second argument is a string B.



Output Format
Return an integer 1 if the first string A is subsequence of the second string B. Else return 0.



Example Input
Input 1:

 A = "hac"
 B = "cathartic"
Input 2:

 A = "bat"
 B = "table"


Example Output
Output 1:

 1
Output 2:

 0


Example Explanation
Explanation 1:

 "hac" is a subsequence of "cathartic", so return 1.
Explanation 2:

 "bat" is not a subsequence of "table", so return 0.
 
 
 
 
 
 
int isSubSequence(string &A, string &B, int m, int n) 
{ 
	 
	if (m == 0) return 1; 
	if (n == 0) return 0; 

	 
	if (A[m-1] == B[n-1]) 
		return isSubSequence(A, B, m-1, n-1); 

	 
	return isSubSequence(A, B, m, n-1); 
} 
int Solution::solve(string A, string B) {
    int m = A.size();
    int n = B.size();
    return isSubSequence(A,B,m,n);
}
