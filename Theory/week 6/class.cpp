#include <iostream>
using namespace std;

class DayofYear
{
    private:
        int private_stuff = 100;
    public:
        void output(); //declaring member functions
        
        int get_private_stuff();
        void set_private_stuff(int x);
        //precondition: any integer
        //postcondition: returns the private member variable

        int day;
        int year;    
};

int main() {
    DayofYear mybirthday;
    cout << mybirthday.get_private_stuff() << endl;
    mybirthday.set_private_stuff(5);
    cout << mybirthday.get_private_stuff();
}

int DayofYear::get_private_stuff() {
    return private_stuff;
}

void DayofYear::set_private_stuff(int x) {
    private_stuff += x;
}