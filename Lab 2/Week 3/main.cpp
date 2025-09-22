#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cmath>
#include "sorting.hpp"

using namespace std;

void check(int* array, unsigned int size){
    bool correct = true;
    for (int i = 0; i < size - 1; i++) {
        if(array[i] > array[i+1]) correct = false;
    }
    if(correct == true) cout << "correct" << endl;
    else cout << "wrong" << endl;
}

int main() {
    srand((unsigned int)time(NULL));
	int size;
    cout << "Give me the size of array: ";
    cin >> size;

    int type_sort;
    cout << "Give me the type of algorithm (0: Bubble (recursion), 1: Insertion (recursion), 2: stooge sort): ";
    cin >> type_sort;
    int array[size];
    int input;
    for (int i = 0; i < size; i++) {
        cin >> input;
        array[i] = input;
    }

    if(type_sort == 0) bubble_sort_recursion(array, size);
    else if(type_sort == 1) insertion_sort_recursion(array, size);
    else if(type_sort == 2) stooge_sort(array, 0, size-1);
    
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

	return 0;
}
