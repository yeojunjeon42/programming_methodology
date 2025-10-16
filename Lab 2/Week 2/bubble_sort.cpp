#include <iostream>
using namespace std;

int array[10] = {1, 9, 50, 30, 4 ,43 , 78, 55, 69, 90};
int size = 10;
int temp;
int main() {

    for (unsigned int i = 0; i < size - 1; i++) 
{
    for (unsigned int j = 0; j < size - 1 - i; j++)
        {
        if (array[j] > array[j+1]) {
            temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;

        }
    }

}
cout << array;
}
