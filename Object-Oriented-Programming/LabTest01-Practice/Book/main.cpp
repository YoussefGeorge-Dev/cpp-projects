#include "Book.h"
#include <iostream>
using namespace std;

int main()
{
    Book book1;
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    book1.setTitle("To Kill a Mockingbird");
    book1.setAuthor("Harper Lee");
    book1.setYear(1960);

    cout << "Book 1:" << endl;
    cout << "Title: " << book1.getTitle() << endl;
    cout << "Author: " << book1.getAuthor() << endl;
    cout << "Year: " << book1.getYear() << endl;

    cout << "Book 2:" << endl;
    cout << "Title: " << book2.getTitle() << endl;
    cout << "Author: " << book2.getAuthor() << endl;
    cout << "Year: " << book2.getYear() << endl;

    return 0;
}