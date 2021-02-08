/*
    Name: Sukhvinder Singh
    Assignment: Assignment #3
    Description: Declare variables of a floating point type, initialize those variable from standard input,
    make use of those variables in arithmetic expressions, output the results.
*/
#include <iostream>

using namespace std;

int main()
{
    // Float values declared
    double first, second;
    
    // User Inputs
    cout<<"Enter First Value: ";
    cin>>first;
    cout<<"Enter Second Value: ";
    cin>>second;
    
    // Basic Manipulations like: +, -, /, *
    cout<<first<<" + "<<second<<" = "<<first+second<<endl;
    cout<<first<<" - "<<second<<" = "<<first-second<<endl;
    cout<<first<<" * "<<second<<" = "<<first*second<<endl;
    cout<<first<<" / "<<second<<" = "<<first/second<<endl;
    
    // Using of % (mod) & typecasting
    cout<<"The remainder of dividing the whole part by 2 is: "<<(int)(first+second)%2<<endl;
    
    // Average of 2 numbers & printing
    cout<<"The average of the two is: "<<(first+second)/2;
    
    return 0;
}
