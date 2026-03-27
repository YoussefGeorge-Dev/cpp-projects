#include <iostream>
using namespace std;

// * Question 1
// TODO: This questiion returns the largest number in an array of integers. 

/* 
int main() 
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
    return 0;
}
*/

// * Question 2
// TODO: This question is about finding the largest and smallest numbers in an array of integers, and calculating the difference between them.

/*
int main() 
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
    return 0;
}
*/

// * Question 3
// TODO: This question is about printing the odd numbers in an array of integers along with their indices.

/*
int main() 
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
    return 0;
}
*/

// * Question 4
// TODO: This question is about storing and displaying a list of student IDs and their corresponding names using two parallel arrays.

/*    
int main() 
{
    const int SIZE = 5;
    int ids[SIZE] = {123456, 266502, 111111, 777777, 999999};
    string names[SIZE] = {"John Doe", "Youssef", "Jane Doe", "Daniel", "Nathan"};

    for (int i = 0; i < SIZE; i++) 
    {
        cout << ids[i] << " "; 
        cout << names[i] << endl;
    }
    return 0;
}
*/

// * Question 5
// ! HIGHLY IMPORTANT
// TODO: This question starts with an array of integers initialized with the first two numbers of the Fibonacci sequence, and then fills the rest of the array with the subsequent numbers in the sequence before printing them out.
// ? Reference: https://en.wikipedia.org/wiki/Fibonacci_sequence

/*
int main() 
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
    return 0;
}
*/

// * Question 6
// !! HIGHLY IMPORTANT
// TODO: This question determines the outcome of a series of games based on an array of integers where 1 represents a win, 0 represents a tie, and -1 represents a loss, and then prints out the result for each game accordingly.

/*
int main() 
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
*/

// * Question 7
// TODO: This question is about decrypting a message by shifting the characters in an array of characters by a certain number of positions in the alphabet, and handling wrap-around for characters near the end of the alphabet appropriately.
// ? Reference: https://en.wikipedia.org/wiki/Caesar_cipher

/*
int main() 
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
    return 0;
}
*/

// * Question 8
// TODO: This question is about counting the frequency of each character in an array of characters and printing out the results.

/*
int main() 
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
    return 0;
}
*/

// * Question 8 (Improved Version)
// TODO: This question is about counting the frequency of each character in an array of characters and printing out the results, but it also ensures that each character is only counted once to avoid redundant output. Please note that I did this was not assigned to me, but I wanted to improve the code for better readability and efficiency.

/*
int main() 
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
    return 0;
}
*/