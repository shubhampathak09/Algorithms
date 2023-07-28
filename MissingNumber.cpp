// missing number

#include<bits/stdc++.h>
using namespace std;

/**

You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

Input

The first input line contains an integer n
.

The second line contains n-1
 numbers. Each number is distinct and between 1
 and n
 (inclusive).

Output

Print the missing number.


**/


int main(){
	
	int n ;
	
	cin >> n;
	
	int input;
	int sum =0;
	
for(int i=1;i<=n-1;i++){
	cin>>input;
	sum+=input;
}
	
	cout<<"Sum..."<<sum<<endl;
	
	int total = n*(n+1)/2;
	
	cout<<"Total.."<<total<<endl;
	
	int missingNumber= total - sum;
	
	cout<<"Missing number is.."<< missingNumber;
	
	
	
}
