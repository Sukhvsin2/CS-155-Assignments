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
	int temp, counter = 0;
	
	// Sentinel Controlled loop
	// It'd be only break if the temp would be equals to -1
	while(temp != -1){
		
		// User Input
		cout<<"Enter a positive integer, For exit type -1 : ";
		cin>>temp;
		
		// Checking if the input number is in between 50-75
		if(49 < temp && temp < 76 ) counter++;
	}
	
	// Printing how many times user entered the number which is in b/w [50-75]
	cout<<endl<<"There were "<<counter<<" number in between 50-75 range that you entered!"<<endl;
	
	return 0;
}
