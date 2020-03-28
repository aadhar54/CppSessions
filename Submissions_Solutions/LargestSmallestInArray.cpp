//WAP to find largest and smallest element in an array

#include<iostream>
using namespace std;
int findLargest(int arr[] ,int n);
int findSmallest(int arr[] ,int n);

int main(){
	int n;
	cout<<"Enter length of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int largest = findLargest(arr,n);
	int smallest = findSmallest(arr,n);

	cout<<"largest "<<largest<<endl;
	cout<<"smallest "<<smallest<<endl;
	return 0;
}
int findLargest(int arr[] ,int n){

	int max =arr[0] ;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int findSmallest(int arr[] ,int n){

	int min = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}