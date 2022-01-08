Powerful Array
Problem Description

Given two array of integers A, B of equal size N. Power of an array is defined as the product of all the elements of the array.

If the power of array A >= power of array B return 1 else return 0.



Problem Constraints
1 <= N <= 100000
1 <= A[i], B[i] <= 109



Input Format
First argument is an array of integers A.
Second argument is an array of integers B.



Output Format
Return 1 if power of A >= power of B else return 0.



Example Input
Input 1:

A = [1, 2, 3, 4]
B = [2, 4, 3, 2]


Example Output
Output 1:

0


Example Explanation
Explanation 1:

Power of A = 24 and Power of B = 48.
So, the answer is 0.





int Solution::solve(vector<int> &A, vector<int> &B) {
    long long int c=1;
   long long int c1=1;
    for(int i=0;i<A.size();i++)
    {
        c= c*A[i];
        c1=c1*B[i];
    }
   
    if(c>=c1)
    return 1;
    else return 0;
}
