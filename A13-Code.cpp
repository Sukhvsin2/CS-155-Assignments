/**
	Name: Sukhvinder Singh
	Description: Use pass by refrence in function & WAP to find HCF/GDC for 2 numbers. Then, print output
	from the refrenced variable using void return type function.
	Assignment: Assignment 13
	Date: 3/16/2021
**/

#include<iostream>

using namespace std;

// function declaration
void GDC(int, int, int&);

int main(){
	// variable declaration
	int n1, n2, output;
	
	// using input
	cout<<"Enter 2 numbers here: ";
	cin>>n1>>n2;
	
	// function calling
	GDC(n1, n2, output);
	
	// output by refrenced variable
	cout<<"GDC of "<<n1<<" & "<<n2<<" is : "<<output;
	
	
	return 0;
}

// function defination with refrence variable
void GDC(int num1, int num2, int& output){
	while(num1 != num2){
		if (num1 > num2) num1 -= num2;
		else num2 -= num1;
	}
	cout<<"cgeck\n"<<num2<<endl;
	output = num1;
}
