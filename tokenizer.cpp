#include<bits/stdc++.h>
using namespace std;

// string tokenisation
// stringstream
// strtok


int main(){
	
	string input;
	
	getline(cin,input);
	
    // creat stringstream object
    
    stringstream ss(input);
    
    string token;
    
	vector<string>tokens;
    
    while(getline(ss,token,' ')){
    	tokens.push_back(token);
	}
	
	for(auto token :tokens){
		cout<<token<<endl;
	}
	
	return 0;
}
