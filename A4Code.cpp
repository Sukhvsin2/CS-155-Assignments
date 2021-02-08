/**
    Name: SUKHVINDER SINGH
    Assignment: A4-Output Formatting
    Description: Coverting kilogram(kg) into Pounds(lbs) & Stones(st)
    also Use setprecision for 2 points after decimal & fixed to persist it.
    Date: Feb 2nd, 2021
**/

#include<iostream>
// Header file for setprecision & fixed
#include<iomanip>

using namespace std;

int main()
{
    // declaration of variables
    double w1, w2, w3, w4, w5;
    
    // Taking input from the user.
    cout<<"Enter five weights in kilograms."<<endl;
    cin>>w1>>w2>>w3>>w4>>w5;
    
    // Using setprecision for maintaining the values upto 2 decimal & fixed for floating point notations
    cout<<fixed<<setprecision(2);
    
    //  Displaying & converting the weights in kg | lbs | st
    
    cout<<setw(10)<<"Weight(kg)"<<setw(20)<<"Weight(lbs)"<<setw(20)<<"Weight(st)"<<endl;
    cout<<setw(10)<<w1<<setw(20)<<w1 * 2.204623<<setw(20)<<w1 * 0.157473<<endl;
    cout<<setw(10)<<w2<<setw(20)<<w2 * 2.204623<<setw(20)<<w2 * 0.157473<<endl;
    cout<<setw(10)<<w3<<setw(20)<<w3 * 2.204623<<setw(20)<<w3 * 0.157473<<endl;
    cout<<setw(10)<<w4<<setw(20)<<w4 * 2.204623<<setw(20)<<w4 * 0.157473<<endl;
    cout<<setw(10)<<w5<<setw(20)<<w5 * 2.204623<<setw(20)<<w5 * 0.157473<<endl;

    /**
        I've used only 5 variable to print the whole output. We can also take 5 variables for each weight.
        w1-w5 for kg
        lb1-lb5 for lbs
        st1-st5 for stones
        But, for saving space I've reused these 5 variables again.
        By this we've to write conversion(multipication) on every printing line.
    **/

    return 0;
}
