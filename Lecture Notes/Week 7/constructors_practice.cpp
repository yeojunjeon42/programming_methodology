#include <iostream>
using namespace std;

class Book {
    public:
        Book(string title,int pages,int number);
        Book();
        void display();
    private:
        string title;
        int pages;
        int number;

};

int main() {
    Book book1;
    Book book2("Harry Potter",290,2);
    book1.display();
    book2.display();
}

Book::Book(string my_title, int my_pages, int my_number) {
    title = my_title;
    pages = my_pages;
    number = my_number;
}

Book::Book() {
    title = "Untitled";
    pages = 0;
    number = 1;
}

void Book::display() {
    cout << "Book " << number << ": Title: " << title << ", pages: " << pages << endl;
}