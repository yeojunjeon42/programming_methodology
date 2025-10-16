#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
} my_birthday = {1, 12, 23};

int main() {
    // Date my_birthday = {1, 12, 23};
    Date your_birthday = {2, 1};

    cout << "Birthday : " << setfill('0') << setw(2) << my_birthday.year << "/" 
         << setfill('0') << setw(2) << my_birthday.month << "/" 
         << setfill('0') << setw(2) << my_birthday.day << endl;

    cout << "Birthday : " << setfill('0') << setw(2) << your_birthday.year << "/" 
         << setfill('0') << setw(2) << your_birthday.month << "/" 
         << setfill('0') << setw(2) << your_birthday.day << endl;
}

