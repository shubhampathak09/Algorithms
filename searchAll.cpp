// find all


/** 
Warm Up - Search All!
Implement a function that returns a list of all occurrences of a given  substring inside a big string.
Return empty vector if smaller string is not present inside bigger string.

Sample Input

string bigString = "I liked the movie, acting in movie was great!";
string smallString = "movie"


Sample Output
12, 29
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	
	
string bigString = "I liked the movie, acting in movie was great!";
string smallString = "movie";

int index = bigString.find(smallString);
vector<int>result ={};

if(index == -1){
	cout<<"no occurrences found";
}	


while(index !=-1){
	result.push_back(index);
	index = bigString.find(smallString);
}

for(auto x : result){
	cout<< x << " ";
}

}
