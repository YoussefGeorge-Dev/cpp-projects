#include "Book.h"

Book::Book()
{
}

Book::Book(string t, string a, int y)
{
    title = t;
    author = a;
    year = y;

}

void Book::setTitle(string t)
{
    title = t;
}

void Book::setAuthor(string a)
{
    author = a;
}

void Book::setYear(int y)
{
    year = y;
}

string Book::getTitle()
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

int Book::getYear()
{
    return year;
}
