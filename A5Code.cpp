/**
    Name: SUKHVINDER SINGH
    Description: Bill system program - Check the pay amount is sufficent for the purchased things.
    Using If statements, if not the system would tell them the amount which is pending or if over paid the
    change would be returned to the customer. Further if it's the exactly same amount just print thank you.
    Motive: Use of IF statement in the program
    Assignment: Assignment A5
    Date: Feb. 7, 2021
**/

#include <iostream>

using namespace std;

int main()
{
    // Declaration of variables for purachase amount & paying amount respectively.
    double t_puchase, t_amount;
    
    // Input of purachase price from user.
    cout<<"Enter the Total Purchase Amount: ";
    cin>>t_puchase;

    // Input of paying amount from user.
    cout<<"Enter the Payment Amount: ";
    cin>>t_amount;
    
    // Extra space of a line for better output.
    cout<<endl;
    
    // Case1 : if the paying amount is exactly same to purachase price
    if(t_puchase == t_amount){
        cout<<"Thank you for shopping!"<<endl;
    }
    
    // Case2 : If the paying amount is not sufficent to pay purachase price
    // print the pending balance
    if(t_amount < t_puchase){
        cout<<"Insufficent amount!! need "<<t_puchase - t_amount<<"$ to complete trasaction."<<endl;
    }
    
    // Case3 : If the paying amount is over from the purachasing amount 
    // print the change 
    if(t_amount > t_puchase){
        cout<<"Thank you for shopping!"<<endl<<"Your change: $"<<t_amount - t_puchase<<endl;
    }

    return 0;
}
