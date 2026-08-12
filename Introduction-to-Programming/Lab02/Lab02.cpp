#include <iostream>
using namespace std;

// * Question 1
// TODO: This questiion returns the largest number in an array of integers.
void question1()
{
    const int SIZE = 5;
    int arr[SIZE] = {60, 80, 50, 20, 70};
    int largest = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "The largest number is: " << largest << endl;
}

// * Question 2
// TODO: This question is about finding the largest and smallest numbers in an array of integers, and calculating the difference between them.
void question2()
{
    const int SIZE = 5;
    int arr[SIZE] = {60, 80, 50, 20, 70};
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << "The difference between the largest and smallest number is: " << largest - smallest << endl;
}

// * Question 3
// TODO: This question is about printing the odd numbers in an array of integers along with their indices.
void question3()
{
    const int SIZE = 5;
    int arr[SIZE] = {3, 8, 5, 2, 7};
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << "at index " << i << ": " << arr[i] << endl;
        }
    }
}

// * Question 4
// TODO: This question is about storing and displaying a list of student IDs and their corresponding names using two parallel arrays.
void question4()
{
    const int SIZE = 5;
    int ids[SIZE] = {123456, 266502, 111111, 777777, 999999};
    string names[SIZE] = {"John Doe", "Youssef", "Jane Doe", "Daniel", "Nathan"};

    for (int i = 0; i < SIZE; i++)
    {
        cout << ids[i] << " ";
        cout << names[i] << endl;
    }
}

// * Question 5
// ! HIGHLY IMPORTANT
// TODO: This question starts with an array of integers initialized with the first two numbers of the Fibonacci sequence, and then fills the rest of the array with the subsequent numbers in the sequence before printing them out.
// ? Reference: https://en.wikipedia.org/wiki/Fibonacci_sequence
void question5()
{
    const int SIZE = 10;
    int arr[SIZE] = {1, 2};
    for (int i = 2; i < SIZE; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2]; // ! to calculate the next number in the Fibonacci sequence
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// * Question 6
// !! HIGHLY IMPORTANT
// TODO: This question determines the outcome of a series of games based on an array of integers where 1 represents a win, 0 represents a tie, and -1 represents a loss, and then prints out the result for each game accordingly.
void question6()
{
    const int SIZE = 5;
    int arr[SIZE] = {1, 0, -1, 1, -1};

    for (int i = 0; i < SIZE; i++)
    {
        switch (arr[i])
        {
        case 1:
            cout << "Game " << i << ": The Team won." << endl;
            break;
        case 0:
            cout << "Game " << i << ": The Team tied." << endl;
            break;
        case -1:
            cout << "Game " << i << ": The Team lost." << endl;
            break;
        default:
            cout << "Game " << i << ": Invalid result." << endl;
            break;
        }
    }
}

// * Question 7
// TODO: This question is about decrypting a message by shifting the characters in an array of characters by a certain number of positions in the alphabet, and handling wrap-around for characters near the end of the alphabet appropriately.
// ? Reference: https://en.wikipedia.org/wiki/Caesar_cipher
void question7()
{
    const int SIZE = 6;
    char arr[SIZE] = {'T', 'F', 'K', 'K', 'B', 'O'};
    int ciphertext;
    for (int i = 0; i < SIZE; i++)
    {
        switch (arr[i])
        {
        case 'X':
            ciphertext = (int)'A';
            break;
        case 'Y':
            ciphertext = (int)'B';
            break;
        case 'Z':
            ciphertext = (int)'C';
            break;
        default:
            ciphertext = arr[i] + 3;
            break;
        }
        cout << (char)ciphertext;
    }
    cout << endl;
}

// * Question 8
// TODO: This question is about counting the frequency of each character in an array of characters and printing out the results.
void question8()
{
    const int SIZE = 10;
    char a[SIZE] = {'A', 'B', 'A', 'A', 'B', 'C', 'C', 'B', 'D', 'D'};
    int count;
    for (int i = 0; i < SIZE; i++)
    {
        count = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        cout << "Letter " << a[i] << " is repeated " << count << " times." << endl;
    }
}

// * Question 8 (Improved Version)
// TODO: This question is about counting the frequency of each character in an array of characters and printing out the results, but it also ensures that each character is only counted once to avoid redundant output. Please note that I did this was not assigned to me, but I wanted to improve the code for better readability and efficiency.
void question8Improved()
{
    const int SIZE = 10;
    char a[SIZE] = {'A', 'B', 'A', 'A', 'B', 'C', 'C', 'B', 'D', 'D'};

    for (int i = 0; i < SIZE; i++)
    {
        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (!alreadyCounted)
        {
            int count = 0;
            for (int j = 0; j < SIZE; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
            }
            cout << "Letter " << a[i] << " is repeated " << count << " times." << endl;
        }
    }
}

// * Main Menu
int main()
{
    int choice;

    do
    {
        cout << "\n=========================================\n";
        cout << "                LAB 02 MENU               \n";
        cout << "=========================================\n";
        cout << " 1. Largest Number in Array\n";
        cout << " 2. Largest & Smallest in Array\n";
        cout << " 3. Odd Numbers with Indices\n";
        cout << " 4. Student IDs & Names (Parallel Arrays)\n";
        cout << " 5. Fibonacci Sequence\n";
        cout << " 6. Game Results (Win/Tie/Loss)\n";
        cout << " 7. Caesar Cipher Decryption\n";
        cout << " 8. Character Frequency Count\n";
        cout << " 9. Character Frequency Count (Improved)\n";
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
        case 8:
            question8();
            break;
        case 9:
            question8Improved();
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
