#include <iostream>
using namespace std;

int* ptrfunction(int x) {
    return &x;
}

int& reffunction(int& x) { //creates a reference to the variable x
    return x;
}

int main() {
    int num1(2025);
    int* ptr = ptrfunction(num1);
    cout << *ptr << endl;
    int& ref = reffunction(num1);
    cout << ref << endl;
    cout << &num1 << endl << &ref << endl; 
}