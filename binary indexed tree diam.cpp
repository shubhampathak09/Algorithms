#include <bits/stdc++.h>
using namespace std;

// Function to find diameter
// of BIT with N + 1 nodes

int diameter(int n)
{
	// L is size of subtree just before subtree
	// in which N lies
	int L, H, templen;
	L = 1;

	// H is the height of subtree just before
	// subtree in which N lies
	H = 0;

	// Base Cases
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (n == 3) {
		return 3;
	}

	// Size of subtree are power of 2
	while (L * 2 <= n) {
		L *= 2;
		H++;
	}

	// 3 Cases as explained in Approach
	if (n >= L * 2 - 1)
		return 2 * H + 1;
	else if (n >= L + (L / 2) - 1)
		return 2 * H;
	return 2 * H - 1;
}

// Driver Code
int main()
{
	int n = 15;
	cout << diameter(n) << endl;
}

