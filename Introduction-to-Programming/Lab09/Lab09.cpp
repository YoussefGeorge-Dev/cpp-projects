#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// * Question 1
// TODO: Program that stores student information in a struct, writes it to a file, calculates the average grade, and appends the result to the file.
/*
struct Student
{
    string name;
    int ID;
    float grade;
};
const int SIZE = 3;

int main()
{
    Student arr[SIZE] = {{"John",1234,3.5},{ "Jane",2358,2.5},{"Youssef",2888,4.0}};
    float sum = 0, average;
    ofstream fout;
    fout.open("Q1.txt");
    for (int i = 0; i < SIZE; i++)
    {
    fout << arr[i].name<<"\t"<<arr[i].ID<<"\t"<<arr[i].grade<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("Q1.txt",ios::in);
    for (int i = 0; i < SIZE; i++)
    {
    fin>> arr[i].name>>arr[i].ID>>arr[i].grade;
    sum = sum + arr[i].grade;
    cout << sum << endl;
    }
    average = sum / SIZE;
    fin.close();
    fout.open("Q1.txt",ios::app);
    fout << average;
    fout.close();
    return 0;
}
*/
// * Question 2
// TODO: Program that uses separate functions to write student data to a file, read and calculate the average, and append the result back to the file.
/*
struct Student
{
string name;
int ID;
float grade;
};
const int SIZE = 3;
! Function to write student data to a file
void writeToFile(ofstream& fout, Student arr[])
{
fout.open("Q2.txt");
for (int i = 0; i < SIZE; i++)
{
fout << arr[i].name << "\t" << arr[i].ID << "\t" << arr[i].grade <<
endl;
}
fout.close();
}
! Function to read student data from a file and calculate the average grade
float readFromFile(ifstream& fin, Student arr[])
{
float sum = 0, average;
fin.open("Q2.txt", ios::in);
for (int i = 0; i < SIZE; i++)
{
fin >> arr[i].name >> arr[i].ID >> arr[i].grade;
sum += arr[i].grade;
cout << sum << endl;
}
average = sum / SIZE;
fin.close();
return average;
}
! Function to append the average grade to the file
void appendToFile(ofstream& fout, float average)
{
fout.open("Q2.txt", ios::app);
fout << average;
fout.close();
}

int main()
{
Student arr[SIZE] = {{"John",1234,3.5}, {"Jane",2358,2.5},
{"Youssef",2888,4.0}};
ofstream fout;
ifstream fin;
writeToFile(fout, arr);
float avg = readFromFile(fin, arr);
appendToFile(fout, avg);
return 0;
}
*/
// * Question 3
// TODO: Program that reads product information from a file, allows the user to input the quantity for each product, calculates the total cost, and writes the bill to another file.
/*
int main()
{
ofstream fout;
ifstream fin;
string product;
float price, total =0;
int items;
fin.open("Q3_Inventory.txt");
fout.open("Q3_Bill.txt");
cout << "For each product, select how many items:" << endl;
while (!fin.eof())
{
fin >> product;
fin >> price;
cout<< product<<endl;
cin >> items;
fout << product << " " << price << " " << items << endl;
total = total + (items * price);
}
 cout << "The total payment is " << total << endl;
fout << "The total is:" << total << endl;
fin.close();
fout.close();
return 0;
}
*/
// * Question 4
// TODO: Program that demonstrates exception handling by asking the user for their age and throwing an exception if the age is less than 12, indicating that movies with violence are not suitable for that age.
/*
int main()
{
int age;
cout << "Enter your age:";
try
{
cin >> age;
if (age < 12)
throw age;
cout << "You are allowed to enter the movie." << endl;
}
catch (int age)
{
cout << "This movie is not suitable for that age." << endl;
}
return 0;
}
*/
// * Question 5
// TODO: Program that demonstrates exception handling by asking the user for their University ID and throwing an exception if the ID does not start with '2', indicating that it is an incorrect ID and prompting the user to try again.
/*
int main()
{
string ID;
cout << "Enter your ID:";
try
{
cin >> ID;
if (ID.at(0) != '2')
throw ID;
cout << "Correct ID" << endl;
}
catch (string ID)
{
cout << "Incorrect ID, Try again." << endl;
cin >> ID;
}
return 0;
}
*/
// * Question 6
// TODO: Program that demonstrates exception handling by creating an array of 4 integers and throwing an exception if the user tries to access an index outside the array boundaries, indicating that the array is out of boundaries and allowing the program to continue normally.
/*
int main()
{
int arr[4] = { 10,20,30,40 };
try
{
for (int i = 0; i <= 4; i++)
{
if (i == 4)
throw -1;
cout << arr[i] << endl;
}
}
catch (int x)
{
cout << "Array out of boundaries" << endl;
}
 cout << "The program will continue normally." << endl;
return 0;
}
*/
