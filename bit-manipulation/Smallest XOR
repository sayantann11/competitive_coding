Smallest XOR
Problem Description

Given two integers A and B, find a number X such that A xor X is minimum possible, and the number of set bits in X equals B.



Problem Constraints
0 <= A <= 109
0 <= B <= 30



Input Format
First argument contains a single integer A. Second argument contains a single integer B.



Output Format
Return a single integer X.



Example Input
Input 1:

 A = 3
 B = 3
Input 2:

 A = 15
 B = 2


Example Output
Output 1:

 7
Output 2:

 12


Example Explanation
Explanation 1:

 3 xor 7 = 4 which is minimum
Explanation 2:

 15 xor 12 = 3 which is minimum











int Solution::solve(int A, int B) {
    int x=0;
    for(int i = 30; i >= 0; i--){
        if(B == 0)
            return x;
        if((1<<i)&A){
            x |= (1<<i);
            B--;
        }
    }
    
    for(int i = 0;i <= 30; i++){
        if(B == 0)
            return x;
        if(((1<<i)&x) == 0){
            x |= (1<<i);
            B--;
        }
    }
    return x;
}
