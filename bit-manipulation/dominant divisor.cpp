Dominant Divisor
Problem Description

For any integer X its dominant divisor is its max odd divisor. You are given two integers A and B. [A, B] represents a range of numbers.

Since Raman is interested in this dominant divisor thing so he wonders whether he can find the sum of dominant divisors of all numbers in the range [A, B]. He needs your help to find this sum.

Help Raman to find the sum of dominant divisors of all numbers in the range [A, B].

Since this sum can be large. Return the sum of dominant divisors of all numbers in the range [A, B] modulo (109+7).

NOTE: Your solution will run on multiple test cases (<=100000). If you are using global variables make sure to clear them.



Problem Constraints
1 <= A <= B <= 109



Input Format
The First argument given is integer A.

The Second argument given is integer B.



Output Format
Return the sum of dominant divisors for each number in the range [A, B] modulo (109+7).



Example Input
Input 1:

 A = 3
 B = 5
Input 2:

 A = 2
 B = 6


Example Output
Output 1:

 9
Output 2:

 13


Example Explanation
Explanation 1:

 Dominant divisor of (3) = 3
 Dominant divisor of (4) = 1
 Dominant divisor of (5) = 5
 Sum = 3 + 1 + 5 = 9
Explanation 2:

 Dominant divisor of (2) = 1
 Dominant divisor of (3) = 3
 Dominant divisor of (4) = 1
 Dominant divisor of (5) = 5
 Dominant divisor of (6) = 3
 Sum = 1 + 3 + 1 + 5 + 3 = 13
 
 
 
 
 long mod = (long)(1e9 + 7);

long play(int n) {
    if(n < 2)   return n;
    long ans = (n + 1) >> 1;    // count of odd terms upto n
    return (ans * ans % mod + play(n >> 1)) % mod;
}

int Solution::solve(int A, int B) {
    return (int)((play(B) - play(A - 1) + mod) % mod);
}
    
