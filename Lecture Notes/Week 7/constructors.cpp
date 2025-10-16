#include <iostream>
using namespace std;

class DayofYear {

    public:
        DayofYear(int , int); // always in the public section
    private:
        int day;
        int month;
        void print_day();
    
};

int main() {
    DayofYear day1(2, 1);
    day1 = DayofYear(3,2);
    return 0;

}

/*
DayofYear::DayofYear(int getMonth, int getDay) { //defined like defining member functions
    month = getMonth;
    day = getDay;
}
*/

//function declaration
//constructor
DayofYear::DayofYear(int getMonth, int getDay) 
    : month(getMonth), day(getDay) 
{ print_day(); }// does same thing

void DayofYear::print_day() { 
    cout << "month: " << month << " day: " << day << endl;
}