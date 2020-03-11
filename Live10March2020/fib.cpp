#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=0,b=1,c=0,count=0;

	while(count<n){
		c=a+b;
		a=b;
		b=c;
		count++;
	}
cout<<a;
return 0;
}