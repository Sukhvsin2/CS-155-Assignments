/**
	Name: Sukhvinder Singh
	Description: WAP to take input from user until & unless user wants to end the program.
	And, printing the number which are in between the range of [50 - 75].
	Outcome: Using the Sentinel Controlled Loop
	Date: 2/24/2021
	Assignment: Assignment 10
**/
#include <iostream>

using namespace std;

int main(){
	// Initialization of variable
	int temp;
	
	// Sentinel Controlled loop
	// It'd be only break if the temp would be equals to -1
	while(temp != -1){
		
		// User Input
		cout<<"Enter a positive integer, For exit type -1 : ";
		cin>>temp;
		
		// Checking if the input is between the range & printing the number.
		if(49 < temp && temp < 76 ) cout<<"Entered number is in between 50-75 : "<<temp<<endl;
	}
	
	return 0;
}
