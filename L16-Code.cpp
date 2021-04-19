#include <iostream>
using namespace std;

void calculate(double&, char&);

int main(){
	double grade;
	char letter;
	calculate(grade, letter);
	cout<<"You got a " << grade << ". That is a: "<<letter<<endl;
	return 0;
}

void calculate(double& g, char& l){
	int input, sum = 0, count = 0;
	
	do{
		cout<<"Enter Grade (-1 to quit)"<<endl;
		cin>>input;
		sum += input;
		count++;
	}while(input != -1);
	
	g = (double)sum / count;
	switch((sum/count)/10){
		case 9:
			l = 'A';
			break;
		case 8:
			l = 'B';
			break;
		case 7:
			l = 'C';
			break;
		case 6: 
			l = 'D';
			break;
		default:
			l = 'F';
	}
}
