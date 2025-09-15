#include <iostream>
using namespace std;

//it's like a dictionary for C++

enum Direction {North = 0, East = 1, South = 2, West = 3};
enum Direction {North, South, East, West}; //equivalent!

//if no values are assigned, consecutive values starting from 0 are assigned

enum MyEnum {ONE = 17, TWO, THREE, FOUR = -3, FIVE}; // it stores integers
//THREE is 18, FOUR is -3, FIVE is 0

MyEnum myEnum = THREE;
cout << myEnum << endl; //18

//ternary operator

max = (n1 > n2) ? n1 : n2; //if n1 is greater than n2, max is n1, otherwise max is n2
//equivalent to:
if (n1 > n2) 
    max = n1;
else 
    max = n2;