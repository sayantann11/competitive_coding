Product array puzzle
Given an array of integers A, find and return the product array of same size where i'th eement of the product array will be equal to the product of all the elements divided by the i'th element of the array.

Note: It is always possible to form the product array with integer (32 bit) values.


Input Format

The only argument given is the integer array A.
Output Format

Return the product array.
Constraints

1 <= length of the array <= 1000
1 <= A[i] <= 10
For Example

Input 1:
    A = [1, 2, 3, 4, 5]
Output 1:
    [120, 60, 40, 30, 24]

Input 2:
    A = [5, 1, 10, 1]
Output 2:

    [10, 50, 5, 50]
    
    
    
    
    
    
    
edit
play_arrow

brightness_4
// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to print product array  
for a given array arr[] of size n */
void productArray(int arr[], int n) 
{ 
  
    // Base case 
    if (n == 1) { 
        cout << 0; 
        return; 
    } 
    /* Allocate memory for temporary  
arrays left[] and right[] */
    int* left = new int[sizeof(int) * n]; 
    int* right = new int[sizeof(int) * n]; 
  
    /* Allocate memory for the product array */
    int* prod = new int[sizeof(int) * n]; 
  
    int i, j; 
  
    /* Left most element of left  
array is always 1 */
    left[0] = 1; 
  
    /* Rightmost most element of right  
array is always 1 */
    right[n - 1] = 1; 
  
    /* Construct the left array */
    for (i = 1; i < n; i++) 
        left[i] = arr[i - 1] * left[i - 1]; 
  
    /* Construct the right array */
    for (j = n - 2; j >= 0; j--) 
        right[j] = arr[j + 1] * right[j + 1]; 
  
    /* Construct the product array using  
        left[] and right[] */
    for (i = 0; i < n; i++) 
        prod[i] = left[i] * right[i]; 
  
    /* print the constructed prod array */
    for (i = 0; i < n; i++) 
        cout << prod[i] << " "; 
  
    return; 
} 
  
/* Driver code*/
int main() 
{ 
    int arr[] = { 10, 3, 5, 6, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "The product array is: \n"; 
    productArray(arr, n); 
} 
