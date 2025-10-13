#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myfile;
    int score1,score2,score3;
    string firstname, lastname;

    myfile.open("mytext.txt");

    if(!myfile){
        cout << "Error opening file" << endl;
        return 1;
    }

    cout << "Input your name: ";
    cin >> firstname;
    cout << "Input your last name: ";
    cin >> lastname;
    cout << "Input your scores: ";
    cin >> score1 >> score2 >> score3;
    myfile << firstname << " " << lastname << " " << score1 << " " << score2 << " " << score3;
    myfile.close();
    
    cout << "Name: " << firstname << " " << lastname << endl;
    cout << "Scores: " << score1 << " " << score2 << " " << score3 << endl;
    return 0;

}