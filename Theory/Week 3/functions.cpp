#include <cmath>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;
unsigned int microsecond = 1000000;

int scaling(int x) {
    return x%6; //scale the random number between 0 and 5
}

int main() {
    while (true) {
        cout << "scaling (0~5): ";
        cout << scaling(rand()) << endl;
        cout << "Double (0~1): ";
        cout << (double(RAND_MAX-rand())/RAND_MAX) << endl;
        usleep(1*microsecond);
    }
}