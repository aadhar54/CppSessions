//WAP to convert string to lowercase
//A + 32 = a
// A to Z is 65 to 90 and a to z is 97 to 122
#include<iostream>
#include<string.h>
using namespace std ;

int main (){
	string s;
	cout<<"Enter string"<<endl;
	cin>>s;
	int l = s.length();
	for(int i=0;i<l;i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
		
	}
	cout<<s;
	return 0;
}