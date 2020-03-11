#include<iostream>
using namespace std;

int main(){

char ch;
cout<<"Enter char"<<endl;
cin>>ch;
while(ch!=' '){
	cout<<int(ch)<<endl;
	cout<<"Enter char"<<endl;
	cin>>ch;
}


	return 0;
}