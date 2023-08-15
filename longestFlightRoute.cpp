// Longest flight route

#include<bits/stdc++.h>
using namespace std;



int dp[2000001];
bool vis[2000001];
vector<int> adj[2000001];
int next_node[20000001];



void dfs(int node){
	vis[node]=true;
	
	for(int v : adj[node]){
		
		if(vis[v]==false)
		dfs(v);
		
		if(dp[v]!=-1 && dp[v] +1 > dp[node]){
			dp[node]=dp[v]+1;
			next+node[node]=v;
		}
		
	}
	
}

// application of dfs
// dp
// top down recursiove solution first
// find out longest parth from each node to n
// then over max will max of all of them and this will be our ans



/** trivia

1/url shortner
cache system
parking lot
google docs and drop box
instagram
linkdin
facebook
twitter
payment gateway
amazon
rate limiter
notificaaton system


 **/



// d[i] -> longest path from node i to n




int main(){
	

int m,a,b;

cin>> n >> m;


for(int i =1 ;i<=n;i++){
	dp[n] = 1;
}
	
	
	for(int i =0 ;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
	}
	
	
	
	dfs(1);
	
}
