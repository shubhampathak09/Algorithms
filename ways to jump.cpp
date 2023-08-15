//jumps to make
#include <bits/stdc++.h>
using namespace std;
 
// function to count ways to jump to
// reach end for each array element
void countWaysToJump(int arr[], int n)
{
    // count_jump[i] store number of ways, memoised way of solving
    
    // arr[i] can reach to the end
    
	int count_jump[n];
    memset(count_jump, 0, sizeof(count_jump)); // memset
 
    // Last element does not require to jump.
    // Count ways to jump for remaining
    // elements
    for (int i=n-2; i>=0; i--)
    {
        // if the element can directly
        
		// jump to the end
        
        if (arr[i] >= n - i - 1) // check if can make jump
            count_jump[i]++;
 
        // add the count of all the elements
        // that can reach to end and arr[i] can
        // reach to them
        
		for (int j=i+1; j < n-1 && j <= arr[i] + i; j++)
 
            // if element can reach to end then add
            // its count to count_jump[i]
            if (count_jump[j] != -1)
                 count_jump[i] += count_jump[j];
 
        // if arr[i] cannot reach to the end
        if (count_jump[i] == 0)
            count_jump[i] = -1;
    }
 
    // print count_jump for each
    // array element
    for (int i=0; i<n; i++)
        cout << count_jump[i] << "  ";
}
 
// Driver program to test above
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 1, 0, 7, 6, 8, 9};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
	countWaysToJump(arr, n);
    
	return 0;
}
