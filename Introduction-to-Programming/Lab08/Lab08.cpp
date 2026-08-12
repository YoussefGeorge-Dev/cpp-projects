#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// * Question 1
// TODO Program that reads a text file named "Q1.txt" and prints its contents to the console.
void question1()
{
    ifstream file("Q1.txt");

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

// * Question 2
// TODO Program that reads a text file named paragraph.txt, converts all characters to uppercase, and appends the modified content back to the same file.
void question2()
{
    fstream file;
    file.open("Q2.txt", ios::in);

    string content = "";
    char ch;

    while (file.get(ch))
    {
        content += toupper(ch);
    }

    file.close();

    file.open("paragraph.txt", ios::app);

    file << "\n"
         << content;

    file.close();

    cout << "check the file" << endl;
}

// * Question 3
// TODO Program that creates a text file named "Q3.txt", writes some sample text into it, and then reads the file to count the number of lines and words, finally printing the counts to the console.
// ! HIGHLY IMPORTANT & HIGHLY DIFFICULT
void question3()
{
    fstream File;

    File.open("Q3.txt", ios::out);
    if (File.is_open())
    {
        File << "Hello world\n";
        File << "This is the sample file for question 3 \n";
        File << "i am very very tired! \n";
        File.close();
    }
    File.open("Q3.txt", ios::in);
    string line;
    int lineCount = 0, wordCount = 0;

    if (File.is_open())
    {
        while (getline(File, line))
        {
            lineCount++;

            bool inWord = false;
            for (size_t i = 0; i < line.length(); i++)
            {
                if (!isspace(line[i]))
                {
                    if (!inWord)
                    {
                        wordCount++;
                        inWord = true;
                    }
                }
                else
                {
                    inWord = false;
                }
            }
        }
        File.close();

        cout << "number of lines: " << lineCount << endl;
        cout << "number of words: " << wordCount << endl;
    }
    else
    {
        cout << "could not open the file!" << endl;
    }
}

// * Question 4
// TODO Program that reads two text files named "surnames.txt" and "fathernames.txt", combines the corresponding lines from both files to create full names, and writes the full names into a new text file named "fullnames.txt".
void question4()
{
    fstream surnamesFile("Q4_surnames.txt", ios::in);
    fstream fathernamesFile("Q4_fathernames.txt", ios::in);
    fstream outputFile("Q4_fullnames.txt", ios::out);

    string firstname, fathername;

    while (surnamesFile >> firstname && fathernamesFile >> fathername)
    {
        outputFile << firstname << " " << fathername << endl;
    }

    surnamesFile.close();
    fathernamesFile.close();
    outputFile.close();

    cout << "Check fullnames.txt" << endl;
}

// * Question 5
// TODO: Program that reads lines from an input file, reverses the content of each line, and writes the reversed result to an output file.
void question5()
{
    fstream firstFile, secondFile;
    firstFile.open("Q5_input.txt", ios::in);
    secondFile.open("Q5_output.txt", ios::out);
    string sentence, reverse;
    int j;

    while (getline(firstFile, sentence))
    {
        cout << sentence << endl;
        reverse = sentence;
        j = 0;
        for (int i = sentence.length() - 1; i >= 0; i--)
        {
            reverse.at(j) = sentence.at(i);
            j++;
        }
        secondFile << reverse << endl;
    }
    firstFile.close();
    secondFile.close();
}

// * Question 6
// TODO: Program that reads text from a file, filters words starting with a user-provided character, and saves those words to a new file.
void question6()
{
    char c;
    string word;
    fstream fin, fout;
    fin.open("Q6_input.txt", ios::in);
    fout.open("Q6_output.txt", ios::out);
    cout << "What are you looking for : ";
    cin >> c;
    while (fin >> word)
    {
        if (word.at(0) == c)
        {
            fout << word << endl;
        }
    }
    fin.close();
    fout.close();
}

// * Question 7
// TODO: Program that writes specific sentences to a file and uses seekg() to extract and print "finish" and "North Coast."
void question7()
{
    ifstream fin;
    ofstream fout;
    string word;
    fout.open("Q7.txt");
    fout << "I want to finish the semester." << endl;
    fout << "I want the holiday to start." << endl;
    fout << "I want to go to the North Coast.";
    fout.close();

    fin.open("Q7.txt", ios::in);
    fin.seekg(10, ios::beg);
    fin >> word;
    cout << word << endl;
    fin.seekg(-12, ios::end);
    fin >> word;
    cout << word;
    fin.seekg(-7, ios::end);
    fin >> word;
    cout << " " << word << endl;
    fin.close();
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 08 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. Read & Print File Contents\n";
        cout << " 2. Uppercase File & Append\n";
        cout << " 3. Count Lines & Words in File\n";
        cout << " 4. Combine Two Files into Full Names\n";
        cout << " 5. Reverse Each Line to New File\n";
        cout << " 6. Filter Words by Starting Letter\n";
        cout << " 7. Extract Words via seekg()\n";
        cout << " 0. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "-----------------------------------------\n";

        switch (choice)
        {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
        case 6:
            question6();
            break;
        case 7:
            question7();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}