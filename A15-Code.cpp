/**
	Name: Sukhvinder Singh
	Desc: Make an array without having any duplicate value in it & then display it on the screen.
	Assignment: Assignment 15
	Date: 4/4/2021
**/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Functions Declarations
void randomArr(int[], int); // random number generator & would make array insertions.
int checkNum(int[], int, int); // checks the duplicacy in the array.
void displayArr(int[], int); // display arrays element on the screen.

int main(){
	// declaring variables
	int arr[5], size=5;
	
	// creating random array
	randomArr(arr, size);
	// dispaying array
	displayArr(arr, size);
	
	return 0;
}

// Generate random numbers & insert into array
void randomArr(int arr[], int size){
	// seeding time every other second to avoid same result
	srand(time(0));
	int rNum, counter = 0;
	while(counter < 5){
		rNum = rand() % 100 + 10;
		// checking the duplicacy if that element is already present or not
		if(checkNum(arr, size, rNum) == 1){
			break;
		}else{
			cout<<endl<<rNum<<endl;
			// if element is not present just insert
			arr[counter] = rNum;
			counter++;	
		}
	}
}

// checking if it's in the array or not
int checkNum(int arr[], int size, int num){
	do{
		if(num == arr[size]){
			return 1;
		}
		size--;
	}while(size);
	return 0;
}

// displaying on the console screen
void displayArr(int arr[], int size){
	cout<<"Your Array: "<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
