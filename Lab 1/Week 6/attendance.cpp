#include <iostream>
#include <iomanip>

using namespace std;

class Date {
    public:
        int days_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int get_month() const;
        int get_day() const;
        void set_date();

    private:
        int day;
        int month;
};

int main(){
    Date birthday;
    cout<<"Enter the date: "<< endl;
    birthday.set_date();
    cout<<"Prints out the date: ";
    cout<<setfill('0') << setw(2)<<birthday.get_month()
                       << setw(2)<<birthday.get_day()<< endl;
    return 0;
};

void Date::set_date(){
    cout << "Enter the month as a number: " << endl;
    
    cin >> month;
    
    if (month > 12 || month <= 0) {
        cout << "Invalid month";
        exit(0);
    }
    
    cout << "Enter the day of the month: " << endl;
    cin >> day;
    
    if (days_of_month[month] < day || day <= 0) {
        cout << "Invalid day";
        exit(0);
    }
}
int Date::get_month() const{
    return month;
}
int Date::get_day() const{
    return day;
}