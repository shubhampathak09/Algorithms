#include<bits/stdc++.h>
using namespace std;


#define N 8

int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

int issafe(int x,int y,int sol[N][N]){
	
	if(x>=0 && x< N && y>=0 && y< N && sol[x][y]!=-1){
		return 1;
	}else
	return 0;
	
}



bool solveKtUtil(int x, int y,int moveNo,int sol[N][N]){
	
	int k,next_x,next_y;
	
	if(moveNo == N * N){
		return 1;
	}
	
	
	for(k =0 ;k<8;k++){
		next_x = x + dx[k];
		next_y = y +dy[k];
		if(issafe(next_x,next_y,sol)){
			sol[next_x][next_y]=moveNo;
			if(solveKtUtil(next_x,next_y,moveNo+1,sol)==1){
				return 1;
			}else
			{
				sol[next_x][next_y]=-1;
			}
		}
	}
	
	return 0;
}


void printSolution(int sol[N][N]){
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		cout<<sol[i][j]<<" ";
		
	}
	cout<<endl;
	
}

int solveKt(){
	int sol[N][N];
	
	for(int x =0 ;x<N;x++){
		for(int y=0;y<N; y++){
			sol[x][y]=-1;
		}
	}
	
	sol[0][0]=0;
	
	if(solveKtUtil(0,0,1,sol)==0){
		cout<<"No solution"<<endl;
		return 0;
	}
	else
	printSolution(sol);
	
	return 1;
	
}






int main(){
	
	
	
	solveKt();
	return 0;
}
