#include <iostream> 
using namespace std; 

int main() { 
	int a = 10, b = 4, res; 

	res = a++; // a=10 
	//a=11
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	
	res = a--; 
	
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	res = ++a; 
	
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	
	res = --a; 
	
	cout << "a is "<<a<<" and res is "<<res<< "\n"; 

	return 0; 
} 
