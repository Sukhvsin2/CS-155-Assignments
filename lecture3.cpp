/*
    Name: Sukhvinder Singh
    Assignment Name: Average of 3 Numbers
    Description: Class Exercise
    Lecture: Lecture 3rd(zoom)
*/
#include <iostream>

using namespace std;

int main()
{
    double one, two, three, avg;
    
    cout<<"Enter any 3 numbers with spaces in between them : ";
    // User Input
    cin>>one>>two>>three;
    
    // Displaying all number on Console
    cout<<"First: "<<one<<endl<<"Second: "<<two<<endl<<"Third: "<<three<<endl;
    
    // Applying Average Formula
    avg = (one+two+three)/3;
    
    // Printing the Average
    cout<<"Average of numbers is: "<<avg<<endl;

    return 0;
}
