#include<bits/stdc++.h>
using namespace std;


vector<int> findAll(string big, string small){
	vector<int> result;
	
	int index = big.find(small);
	
	while(index!=-1){
		result.push_back(index);
		index = big.find(small,index+1);
	}
	return result;
}

int main(){
	
	string bigString = "I liked the movie, acting in movie was great!";
string smallString = "movie";


vector<int> ans = findAll(bigString,smallString);

for(auto x : ans){
	cout<<x<<" ";
}

}
