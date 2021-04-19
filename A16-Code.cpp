#include<iostream>

using namespace std;

void arrayFun(int[][3], int);

int main(){
	int arr[4][3];
	arrayFun(arr, 4);
	
	return 0;
}

void arrayFun(int arr[][3], int r){
	int c = 0;
	while(r < 4){
		while(c < 3){
			cin>>arr[r][c];
			c++;
		}
		c = 0;
	}
	r = 4;
	c = 2;
//	while(r > -1){
//		while(c > -1){
//			cout<<arr[r][c]<<" ";
//			c--;
//		}
//		cout<<endl;
//		r++;
//		c = 3;
//	}
	
	
}
