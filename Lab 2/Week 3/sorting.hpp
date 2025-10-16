void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void bubble_sort_recursion(int* arr, unsigned int size) {
    
    ///////////// IMPLEMENT HERE /////////////////
    if (size <= 1) return;
    
    // One pass of bubble sort - move largest element to end
    for (unsigned int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    
    // Recursively sort the remaining elements
    bubble_sort_recursion(arr, size - 1);
    //////////////////////////////////////////////
}

void insertion_sort_recursion(int* arr, unsigned int size) {

    ///////////// IMPLEMENT HERE /////////////////
    if (size <= 1) return;
    
    // Recursively sort first n-1 elements
    insertion_sort_recursion(arr, size - 1);
    
    // Insert last element at its correct position
    int last = arr[size - 1];
    int j = size - 2;
    
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
    //////////////////////////////////////////////
}

void stooge_sort(int* array, int l, int r) {

    ///////////// IMPLEMENT HERE /////////////////
    if (l >= r) return;
    
    // If there are only 2 elements, swap if necessary
    if (r - l == 1) {
        if (array[l] > array[r]) {
            swap(array[l], array[r]);
        }
        return;
    }
    
    // Calculate the two-thirds point
    int t = (r - l + 1) / 3;
    
    // Recursively sort first 2/3
    stooge_sort(array, l, r - t);
    
    // Recursively sort last 2/3
    stooge_sort(array, l + t, r);
    
    // Recursively sort first 2/3 again
    stooge_sort(array, l, r - t);
    //////////////////////////////////////////////
	
}
