#include<iostream>
using namespace std ;
int main(){
	int n1, n2 , choie;
	
	do{
	cout<<"Enter 2 numbers";
	cin>>n1>>n2;
	cout<<"Enter your choice \n1.Addition\n2.Subtraction \n3.Multiplication\n4.Division\n5.Exit\n";
	cin>>choice;
	switch(choice){
		case 1:cout<<n1+n2;
		break;
		case 2:cout<<n1-n2;
		break;
		case 3:cout<<n1*n2;
		break;
		case 4:cout<<n1/n2;
		break;
		case 5:exit(0);
		break;
		default :
		cout<<"Invalid operation";
	}
	}
	while(choice!=5);


}