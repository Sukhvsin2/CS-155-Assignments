#include<iostream>

using namespace std;

int expoFunction(int, int);

int main(){
	int x, e;
	cout<<"Enter value of Number: ";
	cin>>x;
	cout<<"Enter value of Power: ";
	cin>>e;
	
	cout<<"Result: "<<expoFunction(x,e);
	
	return 0;
}

int expoFunction(int x, int e){
	int temp = 0;
	for(int i=0;i<e;i++){
		temp += x * e;
	}
	
	return temp;
}
