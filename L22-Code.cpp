#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

void fillArray(int[], int);
void printArray(int[], int);
int getD6val();

int main(){
	int arr[6];
	srand(time(0));
	fillArray(arr, 6);
	printArray(arr, 6);
	return 0;
}

void fillArray(int arr[], int s){
	for(int i=0; i<s; i++) arr[i] = 0;
	
	int n, lim = 10000;
	while(lim--){
		n = getD6val();
		arr[n-1]++;
	}
}

void printArray(int arr[], int s){
	cout<<setw(8)<<"1s"<<setw(8)<<"2s"<<setw(8)<<"3s"<<setw(8)<<"4s"<<setw(8)<<"5s"<<setw(8)<<"6s"<<endl;
	for(int i=0;i<s;i++) cout<<setw(8)<<arr[i];
}

int getD6val(){
	int num;
	num = rand()%6 + 1;
	return num;
}

