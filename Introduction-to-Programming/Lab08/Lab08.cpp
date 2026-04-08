#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// * Question 1
// TODO Program that reads a text file named "demo.txt" and prints its contents to the console.

/*
int main() {
    ifstream file("demo.txt");  

    string line;
    while (getline(file, line)) 
    {
        cout << line << endl;
    }

    file.close(); 
    return 0;
}
*/

// * Question 2
// TODO Program that reads a text file named paragraph.txt, converts all characters to uppercase, and appends the modified content back to the same file.
/*
int main() {
    fstream file;
    file.open("paragraph.txt", ios::in);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string content = "";
    char ch;

    while (file.get(ch)) 
    {
        content += toupper(ch);
    }

    file.close();

    file.open("paragraph.txt", ios::app);

    file << "\n" << content;

    file.close();

    cout << "check the file" << endl;

    return 0;
}
*/

// * Question 3
// TODO Program that creates a text file named "Q3.txt", writes some sample text into it, and then reads the file to count the number of lines and words, finally printing the counts to the console.
// ! HIGHLY IMPORTANT

/*
int main() 
{
    fstream File;

    File.open("Q3.txt", ios::out);
    if (File.is_open()) {
        File << "Hello world\n";
        File << "This is the sample file for question 3 \n";
        File << "i am very very tired! \n";
        File.close(); 

    File.open("Q3.txt", ios::in);
    string line;
    int lineCount = 0, wordCount = 0;

    if (File.is_open()) {
        while (getline(File, line)) {
            lineCount++;
            
            bool inWord = false;
            for (int i = 0; i < line.length(); i++) {
                if (!isspace(line[i])) {
                    if (!inWord) {
                        wordCount++;
                        inWord = true;
                    }
                } else {
                    inWord = false;
                }
            }
        }
        File.close();

        cout << "number of lines: " << lineCount << endl;
        cout << "number of words: " << wordCount << endl;
    }
    else {
        cout << "could not open the file!" << endl;
    }

    return 0;
}
}
*/

// * Question 4
// TODO Program that reads two text files named "surnames.txt" and "fathernames.txt", combines the corresponding lines from both files to create full names, and writes the full names into a new text file named "fullnames.txt".
/*
int main() {
    
    fstream surnamesFile("surnames.txt", ios::in);
    fstream fathernamesFile("fathernames.txt", ios::in);
    fstream outputFile("fullnames.txt", ios::out);

    string firstname, fathername;

    while (surnamesFile >> firstname && fathernamesFile >> fathername) 
    {
        outputFile << firstname << " " << fathername << endl;
    }

    surnamesFile.close();
    fathernamesFile.close();
    outputFile.close();

    cout << "Check fullnames.txt" << endl;

    return 0;
}
*/

