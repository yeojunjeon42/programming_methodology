#include <vector>
#include <iostream>
using namespace std;

int length_of_vector(vector<int> v);
//precondition: v is a vector of integers
//postcondition: returns the length of the vector

int capacity_of_vector(vector<int> v);

int main() {
    vector<int> v; //initialization
    v.push_back(1); // add 1 to end of vector
    v.push_back(2);
    v.push_back(3);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    cout << v.front() << endl;
    cout << v.back() << endl; //beginning and end of vectors


    v.resize(6); //increase capacity to 6
    cout << "after resize: " << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    cout << "length: " << length_of_vector(v) << endl;
    cout << "capacity: " << capacity_of_vector(v) << endl;


    cout << &*v.begin() << endl; //address of the first element
    cout << &*v.end() << endl; //address of the last element

    return 0;
}

int length_of_vector(vector<int> v) {
    return v.size(); //dynamic length
}

int capacity_of_vector(vector<int> v) {
    return v.capacity(); //dynamic capacity
}