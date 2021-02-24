/**
	Name: Sukhvinder Singh
	Description: Use of WHILE LOOP. WAP to input 8-digit number & ouput the 4 pairs from that number.
	After printing pairs, display the average of all 4 numbers & grade accounding to the avg.
	For grading use range[90-100] - A, [80-90] - B, [70-80] - C, [60-70] - D, otherwise fail - F & USE SWITCH for grading.
	Assignment: Assignement A8
	Date: 2/23/2021, Tuesday
**/

#include<iostream>

using namespace std;

int main(){
	// Variable initalization
	int temp, counter = 0;
	double avg = 0;
	
	// User Input for 8 digit number
	cout<<"Enter a 8-digit number: ";
	cin>>temp;
	
	// Loop would add in avg & remove 2 digits on each iteration
	// Counter is for keeping the track of the state
	while(counter < 4){
		avg += temp % 100;
		cout<<temp%100<<endl;
		temp /= 100;
		counter++;
	}
	
	// Printing the Average
	cout<<endl<<"Avg: "<<avg/4<<endl;
	
	// Switch with the range for grades
	switch((int)avg/4){
		case 90 ... 100:
			cout<<"Grade A"<<endl;
			break;
			
		case 80 ... 89:
			cout<<"Grade B"<<endl;
			break;
			
		case 70 ... 79:
			cout<<"Grade C"<<endl;
			break;
			
		case 60 ... 69:
			cout<<"Grade D"<<endl;
			break;
		default:
			cout<<"Grade F"<<endl;
			break;
	}
	
	return 0;
}
