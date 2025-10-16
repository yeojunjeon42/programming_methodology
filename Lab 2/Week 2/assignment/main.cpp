#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <cmath>
#include "sorting.hpp"

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
	int size;
    cout << "Give me the size of array: ";
    cin >> size;

    int type_sort;
    cout << "Give me the type of algorithm (0: Bubble, 1: Insertion, 2: Selection, 3: Heap): ";
    cin >> type_sort;
    int array[size];
    int input;
    for (int i = 0; i < size; i++) {
        cin >> input;
        array[i] = input;
    }

    if(type_sort == 0) bubble_reverse_sort(array, size);
    else if(type_sort == 1) insertion_reverse_sort(array, size);
    else if(type_sort == 2) selection_reverse_sort(array, size);
    else if(type_sort == 3) min_heap_sort(array, size);
    
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

	return 0;
}
