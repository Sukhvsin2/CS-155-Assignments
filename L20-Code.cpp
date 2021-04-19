#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void fillArray(int [], int);
void displayArray(int [], int);
int linearSearch(int [], int, int);

int main(){
	srand(time(0));
	int arr[500], size = 500, key;
	
	fillArray(arr, 500);
	displayArray(arr, 500);
	
	cout<<endl<<"Enter any value from 1 -100 to search: ";
	cin>>key;
	int pos = linearSearch(arr, 500, key);
	if(pos != -1) cout<<"The "<<key<<" position is : "<<pos<<endl;
	else cout<<key<<" not in the array!"<<endl;
	return 0;
}

void fillArray(int arr[], int size){
	do{
		arr[size] = rand() % 100 + 1;
		size--;
	}while(size);
}

void displayArray(int arr[], int s){
	int counter = 0;
	do{
		cout<<arr[counter]<<" ";
		counter++;
	}while(counter < s);
	
}

int linearSearch(int arr[], int s, int key){
	do{
		if(arr[s] == key) return s;
		s--;
	}while(s);
	return -1;
}
