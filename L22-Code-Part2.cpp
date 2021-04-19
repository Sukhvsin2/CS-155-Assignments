#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

void fillArray(int[][6], int);
void printArray(int[][6], int);
int getD6val();

int main(){
	int arr[6][6];
	srand(time(0));
	fillArray(arr, 6);
	printArray(arr, 6);
	return 0;
}

void fillArray(int arr[][6], int s){
	for(int i=0; i<s; i++){
		for(int j=0; j<s; j++){
			arr[i][j] = 0;	
		} 	
	}
	
	int v1, v2, lim = 10000;
	while(lim--){
		v1 = getD6val();
		v2 = getD6val();
		arr[v1-1][v2-1]++;
	}
}

void printArray(int arr[][6], int s){
	for(int i=0;i<s;i++){
		for(int j=0; j<s; j++){
			cout<<setw(8)<<arr[i][j];
		}
		cout<<endl;
	}
}

int getD6val(){
	int num;
	num = rand()%6 + 1;
	return num;
}

