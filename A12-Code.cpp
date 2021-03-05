/**
    Name: Sukhvinder Singh
    Class: Lecture 12
    Objective: User Defined Functions
    Assignment: Make a printGrade function & call in the sentinel controlled loop untill & unless user enters the value Z.
    Further, by the grade print the statements like : A - Great Work, B - Good job, C- Passing ... etc.
**/

#include<iostream>

using namespace std;

// Declartion of function
void printGrade(char);

int main(){
    // Variable Initilisation
    char grade;

    // Sentinel loop
    do{
        cout<<"Enter a grade, For Exit type Z: ";
        cin>>grade;
        // Calling the function according to the condition
        if (grade != 'Z') printGrade(grade);
    }while(grade != 'Z');

    return 0;
}

// Defination of a function
void printGrade(char grade){
    switch(grade){
        case 'A':
            cout<<"Great Work"<<endl;
            break;
        case 'B':
            cout<<"Good Job"<<endl;
            break;
        case 'C':
            cout<<"Passing"<<endl;
            break;
        case 'D':
            cout<<"Not Good"<<endl;
            break;
        case 'F':
            cout<<"Failing"<<endl;
            break;
        default:
            cout<<"Not a grade"<<endl;
            break;
    }
}
