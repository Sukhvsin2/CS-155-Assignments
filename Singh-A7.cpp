/**
    Name: Sukhvinder Singh'
    Desc: Take 8 digit number then divide by pair & display number by single, Further
    make avg & display, use switch case & display grade.
    Date: 2/19/2021
    Assignment: A7
**/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter 8 digit Number: ";
    cin>>num;
    
    int temp = 0;
    temp += num % 100;
    cout<<num % 100<<endl;
    num /= 100;
    
    temp += num % 100;
    cout<<num % 100<<endl;
    num /= 100;
    
    temp += num % 100;
    cout<<num % 100<<endl;
    num /= 100;
    
    temp += num % 100;
    cout<<num % 100<<endl;
    num /= 100;
    
    cout<<"Avg: "<<temp/4<<endl<<"Grade: ";
    
    switch(temp/4){
        case 90 ... 100:
            cout<<"A"<<endl;
            break;
        case 80 ... 89:
            cout<<"B"<<endl;
            break;
        case 70 ... 79:
            cout<<"C"<<endl;
            break;
        case 60 ... 69:
            cout<<"D"<<endl;
            break;
        default:
            cout<<"F"<<endl;
            break;
    }
    return 0;
}
