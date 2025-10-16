#include <iostream>
using namespace std;

int main () {
    int i, size, max;
    
    cout << "size of array? \n"; //may not work for all compilers

    cin >> size;
    int score[size];


    for (int i = 1; i<size; i++) {
        cin >> score[i];
        if (score[i] > max) max = score[i];
    }
    
    cout << "The largest score is " << max << endl;
}