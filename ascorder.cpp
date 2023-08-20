#include<bits/stdc++.h>
using namespace std;


void isortAsc(int a[],int n){
	
	
	int i,j,key;
	for(int i=1;i<n;i++){
		
		key=a[i];
		
		j=i-1;
		
		while(j>=0 && a[j] > key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		
	}
	
}



void isSortDsc(int a[],int n){
	
	
	int i,j,key;
	for(int i=1;i<n;i++){
		
		key=a[i];
		
		j=i-1;
		
		while(j>=0 && a[j] < key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		
	}
	
}




void printSol(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	
	int arr[] = {4,5,1,2,0,3,8,8,1,2,-1,2,9};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Prinitng in asc order.."<<endl;
	
	isortAsc(arr,n);
	 
	printSol(arr,n); 
	
	
	cout<<endl;
	
	cout<<"Printing in dsc order.."<<endl;
	
	
	isSortDsc(arr,n);
	
	printSol(arr,n);
	
	
	
}
