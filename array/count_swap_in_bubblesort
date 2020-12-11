Count swaps in BubbleSort
Problem Description

Given an integer array A of size N, sort the elements in increasing order using BubbleSort.

You are asked to return the total number of swaps done.



Problem Constraints
1 <= N <= 103

1 <= A[i] <= 109



Input Format
First and only argument is an integer array A.



Output Format
Return an integer denoting the number of swaps.



Example Input
Input 1:

 A = [5, 3, 1, 9, 4]
Input 2:

 A = [2, 10, 4, 11]


Example Output
Output 1:

 5
Output 2:

 1


Example Explanation
Explanation 1:

 Array will be sorted in 5 Swaps.
Explanation 2:

 Only 1 swap is required.
 
 
 int Solution::solve(vector<int> &A) {
    int i, j; 
    int n = A.size();
    int count=0;
    for (i = 0; i < n-1; i++)      
    {
        for (j = 0; j < n-i-1; j++)  
        {
            if (A[j] > A[j+1])  
            { 
                swap(A[j], A[j+1]);
                count++;
        
                
            }
        } 
    }
    return count;
}

 
