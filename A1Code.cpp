#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string name, day;
    int date, year, month, y, c, week;
    const string STARS = "****************************";

    cout<<"Please enter your name, with no spaces: ";
    cin>>name;

    cout<<STARS<<"\nHello "<<name<<" ,I hope you are having a great day.\n"<<STARS<<endl;
    cout<<"In what year were you born? ";
    cin>>year;
    cout<<"In what month were you born (use 1-Jan, 2-Feb, etc)? ";
    cin>>month;
    cout<<"On what day of the month were you born? ";
    cin>>date;

    if(month == 1){
        month = 13;
        year =- 1;
    }
    if(month == 2){
        month = 14;
        year =- 1;
    }

    y = year%100;
    c = year/100;
    week = int((date+floor((13*(month+1))/5.0)+y+floor(y/4.0)+floor(c/4.0)-2*c))%7;

    cout<<week<<endl;

    switch(week){
        case 1: day="SUNDAY";
                break;
        case 2: day="MONDAY";
                break;
        case 3: day="TUESDAY";
                break;
        case 4: day="WEDNESDAY";
                break;
        case 5: day="THURSDAY";
                break;
        case 6: day="FRIDAY";
                break;
        case 7: day="SATDAY";
                break;
        default: day="ERROR";
                break;
    }

    cout<<"You were born on a "<<day<<endl;

    return 0;
}
