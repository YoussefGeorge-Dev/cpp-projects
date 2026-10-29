#pragma once
#include <string>
using namespace std;
class Book 
{
private:
    string title;
    string author;
    int year;

public:
Book();
Book(string title, string author, int year);

void setTitle(string title);
void setAuthor(string author);
void setYear(int year);

string getTitle();
string getAuthor();
int getYear();

};
