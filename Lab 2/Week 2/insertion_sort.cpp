for (int i = 1; i< size; i++) {
    int target = array[i];
    int j = i - 1;
    while (j >= 0) {
        if (array[j] > target) {
            array[i] = array[j];
            j--;
        } else {
            break;
        }

    }
    array[j+1 ] = target;
}