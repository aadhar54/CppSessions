//WAP to check if 2 strings are anagram

#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1;
	string s2;
	cout<<"Enter two strings\n";
	
	//input
	getline(cin,s1);
	getline(cin,s2);
	
	if(s1.length() != s2.length() ){
		cout<<"Not Anagram\n";
		return 0;	
	}
	int l = s1.length();
	int arr1[256]={0};
	int arr2[256]={0};

	for(int i=0;i<l;i++){
		arr1[s1[i]]++;
		arr2[s2[i]]++;  
	}

	for(int i=0;i<256;i++){
		if(arr1[i]!=arr2[i]){
			cout<<"Not Anagram\n";
			return 0;
		}
	}
	cout<<"Yes its an anagram\n";

	return 0;
}

/*An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “abcd” and “dabc” are anagram of each other.*/