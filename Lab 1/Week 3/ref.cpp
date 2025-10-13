#include <iostream>
using namespace std;

int main() {
    int num1(2025);
    int &num2 = num1;
    cout << num1 << endl << num2 << endl;
    num2 = 2026;

    cout << &num1 << endl << &num2 << endl;
    cout << num1 << endl << num2 << endl;
}