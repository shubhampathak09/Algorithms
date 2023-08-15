// C++ program to find diameter of a tree
// using DFS.
#include <bits/stdc++.h>
using namespace std;

int diameter = -1;

// Function to find the diameter of the tree
// using Dynamic Programming
int dfs(int node, int parent, int dp1[], int dp2[], list<int>* adj)
{

	// Store the first maximum and secondmax
	int firstmax = -1;
	int secondmax = -1;

	// Traverse for all children of node
	for (auto i = adj[node].begin(); i != adj[node].end(); ++i) {
		if (*i == parent)
			continue;

		// Call DFS function again
		dfs(*i, node, dp1, dp2, adj);

		// Find first max
		if (firstmax == -1) {
			firstmax = dp1[*i];
		}
		else if (dp1[*i] >= firstmax) // Secondmaximum
		{
			secondmax = firstmax;
			firstmax = dp1[*i];
		}
		else if (dp1[*i] > secondmax) // Find secondmaximum
		{
			secondmax = dp1[*i];
		}
	}

	// Base case for every node
	dp1[node] = 1;
	if (firstmax != -1) // Add
		dp1[node] += firstmax;

	// Find dp[2]
	if (secondmax != -1)
		dp2[node] = 1 + firstmax + secondmax;

	diameter = max(diameter, max(dp1[node], dp2[node]));
	// Return maximum of both
	return max(dp1[node], dp2[node]);
}

// Driver Code
int main()
{
	int n = 5;

	/* Constructed tree is
		1
		/ \
		2 3
	/ \
	4 5 */
	list<int>* adj = new list<int>[n + 1];

	/*create undirected edges */
	adj[1].push_back(2);
	adj[2].push_back(1);
	adj[1].push_back(3);
	adj[3].push_back(1);
	adj[2].push_back(4);
	adj[4].push_back(2);
	adj[2].push_back(5);
	adj[5].push_back(2);

	int dp1[n + 1], dp2[n + 1];
	memset(dp1, 0, sizeof dp1);
	memset(dp2, 0, sizeof dp2);

	// Find diameter by calling function
	dfs(1, 1, dp1, dp2, adj)
	cout << "Diameter of the given tree is "
		<< diameter << endl;

	return 0;
}

