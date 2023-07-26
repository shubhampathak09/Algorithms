// search inside a string

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string word;
	getline(cin,word);
	
	// find function
	
	string paragraph="we are learning about stl strings.stl string class are quite powerful";
//	cout<< paragraph.find(word);


    size_t index = paragraph.find(word);
    
    if(index!=-1){
    	// find next occurence
    	cout<<"first index is .."<< index;
	}
    
    
    index = paragraph.find(word,index+1);
    
    
     
    if(index!=-1){
    	// find next occurence
    	cout<<endl;
    	cout<<"second index is .."<< index;
	}
    
    if(index == -1){
    	cout<<"string not found";
	}

// all occurences
// unsigned int
	
}
