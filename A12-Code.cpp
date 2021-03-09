#include<iostream>

using namespace std;

void printGrade(char);

int main(){
    // Variable Initilisation
    char grade;
    
    while(grade != 'Z'){
    	cout<<"Enter a grade, For Exit type Z: ";
        cin>>grade;
        printGrade(grade);
	}

    return 0;
}

// Defination of a function
void printGrade(char grade){
//    switch(grade){
//        case 'A':
//            cout<<"Great Work"<<endl;
//            break;
//        case 'B':
//            cout<<"Good Job"<<endl;
//            break;
//        case 'C':
//            cout<<"Passing"<<endl;
//            break;
//        case 'D':
//            cout<<"Not Good"<<endl;
//            break;
//        case 'F':
//            cout<<"Failing"<<endl;
//            break;
//        default:
//            cout<<"Not a grade"<<endl;
//            break;
//    }

}
