#include <iostream>
using namespace std;

void f(int n, double m) {
    cout << n << m << 1 << endl;
}

void f(int n, int m) {
    cout << n << m << 2 << endl;
}

void f(double n, int m) {
    cout << n << m << 3 << endl;
}

int main() {
    cout << f(1,2.3);
}