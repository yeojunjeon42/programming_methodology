#include <iostream>
#include <iterator>
#include <set>

using namespace std;

void print_set(set<int> s)
{
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    set<int> s1 = {10, 20, 30, 40, 50, 60};


    int num;
    s1.erase(50);
    cout << "s1.erase(50): " << num << " removed " << endl
         << "The set s1 after removal of 50 is : ";
    print_set(s1);

    cout << endl
        << "s1.lower_bound(40) : " << &*s1.lower_bound(40) << endl
        << "s1.upper_bound(40) : " << &*s1.upper_bound(40) << endl;

    cout 
        << "size of s1 is: " << s1.size() << endl
        << "find 60 in s1 is : " << *s1.find(60) << endl;
        
        

    return 0;
}
