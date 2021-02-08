#include <iostream>

using namespace std;

int main()
{
    int number, astrology = 0;
    
    cout<<"Enter a number in between 1 - 9"<<endl<<"Number: "<<endl;
    // Input of a number
    cin>>number;
    // Output of the number
    cout<<"You've entered number "<<number<<endl;
    
    cout<<"Let's calculate your astrology number\nEnter your birthdate like 13,22.. : ";
    cin>>number;
    
    do{
        astrology += number % 10;
        cout<<"check"<<endl;
        number /= 10;
    }while(number!=0);
    
    cout<<"Your astrology number is : "<<astrology;
    

    return 0;
}
