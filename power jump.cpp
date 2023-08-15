// C++ program to calculate power of jump
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the maximum power of the jump
int powerOfJump(string s)
{
	// Initialize the count with 1
	int count = 1;
	int max_so_far = INT_MIN;
	
	// Find the character at last index
	char ch = s[s.length() - 1];
	
	// Start traversing the string
	for (int i = 0; i < s.length(); i++)
	{
		// Check if the current char is equal
		// to the last character
		if (s[i] == ch)
		{
			// max_so_far stores maximum value of
			// the power of the jump from starting
			// to ith position
			if (count > max_so_far) {
				max_so_far = count;
				
			}
			// Reset the count to 1
			count = 1;
			
		}
		// Else, increment the number of jumps/count
		else
		count++;
		
	}
	// Return the maximum number of jumps
	return max_so_far;
	
}

// Driver code
int main(){
	string st = "1010101";
	cout<<powerOfJump(st);
	
}
// This code is contributed by ash264

