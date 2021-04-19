/**
	Name: Sukhvinder Singh
	Desc: Make an array of 5 double values & show amount after adding all. Apply 9% tax then,
	print the total amount at last.
	Date: 3/31/21
	Assignment: Assignment 14
**/
#include<iostream>

using namespace std;

int main(){
	// Array declaration with sum for all items
	double arr[5], sum=0;
	int i=0;
	cout<<"Enter price of 5 food items: ";
	// array values input by user
	do{
		cin>>arr[i];
		sum += arr[i];
		i++;
	}while(i<5);
	
	// reseting counter - i for displaying in next loop
	i=0;
	
	// printing values
	while(i < 5){
		cout<<arr[i]<<endl;
		i++;
	}
	
	// printing amount only, tax only & total amount after tax
	cout<<endl<<"Amount: "<<sum<<endl;
	cout<<"Tax 9%: "<<sum * 0.09<<endl;
	cout<<"Total Amount: "<<sum+(sum * 0.09)<<endl;
	
	
	return 0;
}
