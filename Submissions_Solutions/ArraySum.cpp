//WAP to cal sum of an array

#include<iostream>
using namespace std ;

void printSum(int arr[],int n);
int main(){
	
	int n;
	cout<<"Please enter the length of array\n";
	cin>>n;
	int arr[n];

	cout<<"Enter elements\n";

	//input
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	printSum(arr,n);

	return 0;
}
void printSum(int arr[],int n){
	int sum =0;
	for(int i=0;i<n;i++){
		sum = sum+arr[i];
	}
	cout<<"The sum is "<<sum<<endl;
}
