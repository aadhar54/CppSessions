#include<iostream>
using namespace std ;
void doSwap(int* n1,int* n2);

int main(){
	
	int n1,n2;
	cout<<"Enter two numbers \n";
	cin>>n1>>n2;

	cout<<"Number 1 is "<<n1<<endl;
	cout<<"Number 2 is "<<n2<<endl;

	doSwap(&n1,&n2);

	cout<<"Number 1 is "<<n1<<endl;
	cout<<"Number 2 is "<<n2<<endl;

	return 0;
}
void doSwap(int* n1,int* n2){
	int val = *n1;
	*n1 = *n2;
	*n2 = val;
}



