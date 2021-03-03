/**
	Name: Sukhvinder Singh
	Description: From a file read more than 3 numbers, sum up them & output the average of that sum in another file.
	Objective: Use of fstream class - ifstream & ofstream
	Assignment: Assignment 11
	Date: 3/2/2021
**/

#include<iostream>
// For file stream classes & objects
#include<fstream>

using namespace std;

int main(){
	// Input stream for reading the file.
	ifstream inFile;
	
	// Output stream for writing in the file.
	ofstream outFile;
	
	// Existed file reading
	inFile.open("A11_in.txt");
	
	// File creation for output
	outFile.open("A11_out.txt");
	
	// Variables initialisation 
	int sum = 0, counter = 0, input;
	
//	do{
//		inFile >> variable;
//		cout<<variable<<endl;
//	}while(!inFile.eof());
	
	// file reading until the END OF FILE (EOF)
	while(inFile >> input){
		counter++;
		sum += input;
	}
	
	// Writing in the file for output
	outFile <<"Average: "<<(double)sum/counter;
	
	// input file close
	inFile.close();
	
	// output file close
	outFile.close();
	
	
	return 0;
}
