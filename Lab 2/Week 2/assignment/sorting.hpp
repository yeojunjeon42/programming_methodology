

void bubble_reverse_sort(int* array, unsigned int size) {
    for(int i = size - 1; i > 0; i--) {
        for(int j = i-1; j>=0; j--) {
            if(array[j] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void insertion_reverse_sort(int* array, unsigned int size) {
    for ( int i = size -1; i >= 0; i--) {
        int target = array[i];
        int j = i +1;
        while (j < size && array[j] > target) {
            array[j-1] = array[j];
            j++;
        } 
        array[j-1] = target;
    }
}

void selection_reverse_sort(int* array, unsigned int size) {
    
        for( int i = size - 1; i >= 0; i--) {
        int min = array[i];
        int min_index = i;
        for( int j = i - 1; j >= 0; j--) {
            
            if(array[j] < min) {
                min = array[j];
                min_index = j;
            }
        }
        int temp = array[i];
        array[min_index] = temp;
        array[i] = min;
        
    }

}

void min_heapify(int* array, int index, int heap_size) {
    int smallest = index;        // Initialize smallest as root
    int left = 2 * index + 1;    // Left child
    int right = 2 * index + 2;   // Right child

    // If left child is smaller than root
    if (left < heap_size && array[left] < array[smallest]) {
        smallest = left;
    }

    // If right child is smaller than smallest so far
    if (right < heap_size && array[right] < array[smallest]) {
        smallest = right;
    }

    // If smallest is not root
    if (smallest != index) {
        int temp = array[index];
        array[index] = array[smallest];
        array[smallest] = temp;
        
        // Recursively heapify the affected sub-tree
        min_heapify(array, smallest, heap_size);
    }
}

void min_heap_sort(int* array, unsigned int size) {
    // Build min heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--) {
        min_heapify(array, i, size);
    }

    // Extract elements from heap one by one
    for (int i = size - 1; i > 0; i--) {
        // Move current root to end
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        
        // Call min_heapify on the reduced heap
        min_heapify(array, 0, i);
    }
}