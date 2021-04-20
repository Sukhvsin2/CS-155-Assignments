/**
	Name: Sukhvinder Singh
	Descrption: Print the middle row & column of the array.
	Date: 3/19/21
	Assignment: Assignment 17
**/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

/**
	Function Declaration
	Name: Print Middle
	Incoming Data: An 2D array with 3X3 dimensions & integer row
	Outgoing Data: None
**/
void printMiddle(int [][3], int);

int main(){
	// Array Declaration
	int arr[3][3];
	
	// Seeding time for diffrent random number every time
	srand(time(0));
	
	// inserting random number between 20 to 80
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j] = rand() % 61 + 20;
		}
	}

	// function calling
	printMiddle(arr, 3);	

	return 0;
}


/**
	Function Defination
	Name: Print Middle
	Incoming Data: An 2D array with 3X3 dimensions & integer row
	Outgoing Data: None
**/
void printMiddle(int arr[][3], int r){
	int rMValue;
	if(r % 2 == 0){
		rMValue = (r / 2) - 1; 
	}else{
		rMValue = (r / 2);
	}
	
	cout<<"Middle Row: ";
	
	// printing middle row
	for(int i=0;i<3;i++){
		cout<<arr[rMValue][i]<<" ";
	}
	
	// printing middle column
	cout<<endl<<"Middle Column: ";
	for(int i=0;i<3;i++){
		cout<<arr[i][1]<<" ";
	}
}
