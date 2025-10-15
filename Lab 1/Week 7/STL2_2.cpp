#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &vec)
{
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}

void print_vector_info(vector<int> &vec)
{
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
}

int main()
{
    vector<int> vec;
    // Declaration and assign
   
   for (int i = 0; i<2; i++) {
       vec.push_back(i+1);
   }

    // Print the elements in vector
    cout << "Initial vector : ";
    print_vector(vec);
    print_vector_info(vec);


    for (int i = 0; i< 2; i++) {
        vec.push_back(i+1);
    }
  
    cout << "After push-1: ";
    print_vector(vec);
    print_vector_info(vec);


    for (int i = 0; i< 2; i++) {
        vec.push_back(i+1);
    }
 
    cout << "After push-2: ";
    print_vector(vec);
    print_vector_info(vec); //doubles capacity when full


    vec.resize(3);
  
    cout << "After resize: ";
    print_vector(vec);
    print_vector_info(vec);


    vec.shrink_to_fit();
    
    cout << "After shrink_to_fit: "; //reduce capacity asw
    print_vector(vec);
    print_vector_info(vec);

    return 0;
}
