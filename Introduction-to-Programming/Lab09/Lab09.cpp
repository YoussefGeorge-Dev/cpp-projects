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