/**
    Name: SUKHVINDER SINGH
    Description: Input 5 numbers from the user & display The Largest Number & Second Largest Number
    from the input. Output should be like The Largest Number is : ____ & on next line
    The Second Largest Number is : ____.
    Date: Feb. 8, 2021
    Assignment: Assignment A-6
**/

#include <iostream>

using namespace std;

int main()
{
    // Declaration of varibale for input
    // num1 for (largest) & num2 for (second largest)
    int num1=0, num2=0, temp;
    
    // Input first number from user
    cout<<"Enter your First Number: ";
    cin>>temp;
    
    // Checking the number is largest till now or not & assigning
    if(temp > num1){
        num2 = num1;
        num1 = temp;
    }
    if(temp > num2 && num1 > temp){
        num2 = temp;
    }
    
    // Input second number from user
    cout<<"Enter your Second Number: ";
    cin>>temp;
    
    // Checking the number is largest till now or not & assigning
    if(temp > num1){
        num2 = num1;
        num1 = temp;
    }
    if(temp > num2 && num1 > temp){
        num2 = temp;
    }
    
    // Input third number from user
    cout<<"Enter your Third Number: ";
    cin>>temp;
    
    // Checking the number is largest till now or not & assigning
    if(temp > num1){
        num2 = num1;
        num1 = temp;
    }
    if(temp > num2 && num1 > temp){
        num2 = temp;
    }
    
    // Input forth number from user
    cout<<"Enter your Fourth Number: ";
    cin>>temp;
    
    // Checking the number is largest till now or not & assigning
    if(temp > num1){
        num2 = num1;
        num1 = temp;
    }
    if(temp > num2 && num1 > temp){
        num2 = temp;
    }
    
    // Input fifth number from user
    cout<<"Enter your Fifth Number: ";
    cin>>temp;
    
    // Checking the number is largest till now or not & assigning
    if(temp > num1){
        num2 = num1;
        num1 = temp;
    }
    if(temp > num2 && num1 > temp){
        num2 = temp;
    }
    
    // Displaying the Largest & Second Largest Number on the Console.
    cout<<endl<<"The Largest Number is : "<<num1<<endl;
    cout<<"The Second Largest Number is : "<<num2<<endl;
    
    return 0;
}
