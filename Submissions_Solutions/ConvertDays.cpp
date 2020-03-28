//WAP to convert days to years , weeks and days

#include<iostream>
using namespace std ;

int main(){
	
	int days ;
	int leftDays;
	int y;
	int w ;

	cout<<"Please enter days\n";
	cin>>days ;
	//years
	if(days>=365){
		y = days/365;
		leftDays = days%365;
	}
	else{
		y=0;
		leftDays = days ;
	}

	//months
	if(leftDays>=7){
		w = leftDays/7;
		leftDays = leftDays%7;
	}
	else{
		w=0;
		leftDays = leftDays;
	}

	//days is leftDays

	cout<< days <<" days is equal to "<<y<<" years "
	<<w<<" weeks and "<<leftDays<<" days.\n";

	return 0;
}


