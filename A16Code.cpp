/**
	Name: Sukhvinder Singh
	Desc: Implement 2D array & print every row in reverse order.
	Date: 4/13/21
	Course: CS-155
	Assignment: Assignment 16
**/
#include<iostream>

using namespace std;

/**
	Name: Array Fun
	Incoming: An 2D array & no. of row
	Outgoing: None
	Function Declaration
**/
void arrayFun(int[][3], int);

int main(){
	// 2D array initilization
	int arr[4][3];
	// function calling
	arrayFun(arr, 4);
	
	return 0;
}

// Function Defination
void arrayFun(int arr[][3], int r){
	// variables init
	int c = 0, counter = 0;
	
	// loop for input from user
	while(counter < r){
		while(c < 3){
			cin>>arr[counter][c];
			c++;
		}
		counter++;
		c = 0;
	}
	
	// variable reset for second loop
	counter = 0;
	c = 2;
	cout<<endl;
	
	// loop for displaying the input in desired order
	while(counter < r){
		while(c > -1){
			cout<<arr[counter][c]<<" ";
			c--;
		}
		cout<<endl;
		counter++;
		c = 2;
	}	
}
