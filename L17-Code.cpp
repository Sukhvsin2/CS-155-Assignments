#include<iostream>

using namespace std;

int main(){
	double arr[200], avg = 0;
	int counter = 0, input;
	
	
	do{
		cout<<"Enter your value, -1 to exit: ";
		cin>>input;
		arr[counter] = input;
		if(input != -1){
			avg += input;
			counter++;
		}
	}while(input!=-1);
	
	avg /= counter;
	
	cout<<"Reverse Order"<<endl;
	while(counter){
		counter--;
		cout<<arr[counter]<<" ";
	}
	cout<<endl<<"Average: "<<avg<<endl;
	
	return 0;
}
