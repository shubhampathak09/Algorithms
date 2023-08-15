#include<bits/stdc++.h>
using namespace std;
/**
knight moves

bfs 2d grid

dfs on 2d grid

graph theroy pplaylist part 1

**/


/**intialize the dir arrays **/


int dx[] ={-2,-1,1,2,2,1,-1,-1,2};

int dy[] ={1,2,2,1,-1,-2,-2,-1};


int vis[10][10];

int dis[10[10];

int taretX,targetY;


int bfs(int x,int y){
	
	queue<pair<int,int>>q;
	dist[x][y]=0;
	vis[x][y] =1;
	q.push({x,y});
	
	
	if(x == targetX && y == targetY )
	return dist[x][y];
	
	
	while(!q.empty()){
		
		int curr_x = q.front().first();
		int curr_y=q.front().second();
		
		q.pop();
		
		// traverse the 8 directions and put into the queue
		
	}
	
}

int main(){

int x,y,q;

cin>>q;

while(q--){
	
	
	char a,b;
	
	for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			vis[i]][j]=0;
		}
	}
	
	cin>>a>>b;
	
	x = a -'a' +1; //getX(a);
	y=  b- '0';
	
	
	cout<<bfs(x,y)<<endl;
	
	
}


	
}
