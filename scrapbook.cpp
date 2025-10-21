#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void print_array(const int a[], int size);
void print_vec(const vector<int> a);

void bubble_sort(int a[],int size);
void insertion_sort(int a[], int size);
void selection_sort(int a[],int size);

void heap_sort(int a[], int size);
void max_heapify(int a[], int size, int index);

void merge_sort(int a[], int l, int r);
void merge(int a[], int l, int p, int r);

void quick_sort(int a[], int l, int r);
int partition(int a[], int l, int r);

void counting_sort(int a[], int size);

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    int temp[size];
    vector<int> array_as_vec;


    cout << "Enter array to sort: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        array_as_vec.push_back(arr[i]);
    }

    // //bubble sort:
    // cout << "After bubble sort: " << endl;
    // bubble_sort(arr,size);
    // print_array(arr,size);

    // //insertion sort:
    // cout << "After insertion sort: " << endl;
    // insertion_sort(arr, size);
    // print_array(arr, size);

// cout << "After selection sort: " << endl;
// selection_sort(arr,size);
// print_array(arr,size);

// cout << "After heap sort: " << endl;
// heap_sort(arr,size);
// print_array(arr,size);

// cout << "After merge sort: " << endl;
// merge_sort(arr,0, size-1);
// print_array(arr,size);

// cout << "After quick sort: " << endl;
// quick_sort(arr,0,size-1);
// print_array(arr,size);

    cout << "After counting sort: " << endl;
    counting_sort(arr,size);
    print_array(arr,size);

}

//partition, j: l -> r-1. i follows if a[j] < a[r].
//recursive quick sort call excluding pivot
//end case: if NOT l< r

// void quick_sort(int a[], int l, int r) {
//     if (l < r) {
//         int pivot = partition(a,l,r);
//         quick_sort(a,l,pivot-1);
//         quick_sort(a,pivot+1,r);
//     }

// }

// int partition(int a[],int l, int r) {
//     int i = l-1;
//     for (int j = l; j < r; j++) {
//         if (a[j] < a[r]) {
//             i++;
//             int temp = a[i];
//             a[j] = a[i];
//             a[i] = temp;
//         }
//     }
//     int temp = a[i+1];
//     a[i+1] = a[r];
//     a[r] = temp;
//     return i+1;
// }


void merge_sort(int a[], int l, int r) {
    if (l < r) {
        int p = (l+r) /2;
        merge_sort(a,l,p);
        merge_sort(a,p+1,r);
        merge(a,l,p,r);
    }

}

void merge(int a[],int l, int p, int r) {
    int left_size = p-l + 1;
    int right_size = r-p;
    int left[left_size], right[right_size];

    for (int i = 0; i < left_size; i++) {
        left[i] = a[i+l];
    }
    for (int j = 0; j < right_size; j++) {
        right[j] = a[j+l+left_size];
    }
    int i = 0, j= 0, k =l;
    while (i < left_size && j < right_size) {
        if (left[i] > right[j]) {
            a[k++] = right[j++];
        } else {
            a[k++] = left[i++];
        }
    }

    while (i < left_size) {
        a[k++] = left[i++];
    }
    while (j < right_size) {
        a[k++] = right[j++];
    }
}


void print_array(const int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl << endl;
}

void print_vec(const vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int a[], int size) {
    for(int i = 0; i < size-1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void insertion_sort(int a[], int size) { //size-1 because 
    for (int i = 0; i < size -1; i++) {
        int j = i-1;
        int key = a[i];
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j]; //shift
            j--;
        }
        a[j+1] = key;
    }
}

void selection_sort(int a[], int size) {
    for (int i = 0; i < size; i++) {
        int min = a[i]; //set min as current
        int min_index = i;
        for (int j = i+1; j < size; j++) {
            if(a[j] < min) {
                min = a[j];
                min_index = j;
            }
        }
        a[min_index] = a[i];
            a[i] = min;
    }
}


void heap_sort(int a[], int size) {
    int index = size/2 -1;
    for (int i = index; i >= 0; i--) {
        max_heapify(a,size, i);
    }

    for (int i = 0; i < size -1; i++) {
        int temp = a[0];
        a[0] = a[size - 1 - i];
        a[size - 1 -i] = temp;
        max_heapify(a,size -i-1,0);
    }
}

void max_heapify(int a[], int size, int index) {
    int l = 2*index + 1;
    int r = 2*index + 2;
    int largest = index;

    if (a[l] > a[largest] && l < size) {
        largest = l;
    }
    if (a[r] > a[largest] && r < size) {
        largest = r;
    }
    if (largest != index) { //swap
        int temp = a[largest];
        a[largest] = a[index];
        a[index] = temp;
        max_heapify(a,size,largest);
    }
}

//sample array: 2 3 4 2 5 1 7