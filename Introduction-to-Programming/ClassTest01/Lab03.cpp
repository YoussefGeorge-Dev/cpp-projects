#include <iostream>
using namespace std;

// * Question 1
// TODO: This question is about finding the largest and smallest numbers in a 2D array of integers.

/*
int main() 
{
    const int ROWS = 3;
    const int COLS = 5;

    int arr[ROWS][COLS] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min) 
            {
                min = arr[i][j];
            }
        }
    }
    cout << "The largest number is: " << max << endl;
    cout << "The smallest number is: " << min << endl;
    return 0;
}
*/

// * Question 2
// TODO: This question is about printing the odd numbers in a 2D array of integers.

/*
int main() 
{
    const int ROWS = 3;
    const int COLS = 5;

    int arr[ROWS][COLS] = 
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (arr[i][j] % 2 != 0) 
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}
*/

// * Question 3
// ! HIGHLY IMPORTANT
// TODO: This question is about calculating the product of each column in a 2D array of integers and storing the results in a separate array before printing them out. 

/*
int main() 
{
    const int ROWS = 3;
    const int COLS = 5;

    int arr[ROWS][COLS] = 
    {
        {5, 3, 2, 1, 5},
        {2, 3, 4, 3, 6},
        {10, 9, 8, 4, 2}
    };

    int result[COLS];
    int product;

    for (int i = 0; i < COLS; i++)
    {
        product = 1; // ! Reset product to 1 for each new column

        for (int j = 0; j < ROWS; j++)
        {
            product = product * arr[j][i];
        }

        result[i] = product;
        cout << result[i] << " ";
    }

    return 0;
}
*/

// * Question 4
// TODO: This question is about searching for a specific number in a 2D array of integers and printing out its location if found, or a message indicating that it was not found if it is not present in the array.

/*
int main() 
{
    const int ROWS = 3;
    const int COLS = 3;

    int arr[ROWS][COLS] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int x;
    cout << "Enter a number to search for: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Number found at row " << i << endl;
                cout << "Number found at column " << j;
                found = true;
                break; // ! Exit the inner loop if the number is found
            }
        }
    }
    if (found == false)
        cout << "Number not found." << endl;

    return 0;
}
*/

// * Question 5
// ! HIGHLY IMPORTANT
// TODO: This question is about calculating the average grade for each student based on a 2D array of integers where each row represents a student.

/*
int main() 
{
    const int ROWS = 3;
    const int COLS = 5;

    int arr[ROWS][COLS] = 
    {
        {50, 10, 89, 36, 69},
        {87, 94, 52, 37, 78},
        {48, 65, 75, 19, 23}
    };

    float average = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            average = average + arr[i][j];
        }
        average = average / COLS;
        cout << "Student " << i + 1 << " average grade is " << average << endl;
    }
    return 0;
}
*/

// * Question 6
// !! HIGHLY IMPORTANT
// TODO: This is the product of two matrices, where the first matrix has dimensions 2x3 and the second matrix has dimensions 3x2, and the resulting product is stored in a new matrix with dimensions 2x2 before being printed out.

/*
int main() 
{
    const int ROW1 = 2;
    const int COL1 = 3;
    const int ROW2 = 3;
    const int COL2 = 2;

    int a[ROW1][COL1] = { {1, 2, 3}, {4, 5, 6} };
    int b[ROW2][COL2] = { {10, 11}, {20, 21}, {30, 31} };
    int result[ROW1][COL2];

    // Multiplying matrix a and b and storing in array result.
    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++)
            {
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    for (int i = 0; i < ROW1; i++)
    {
        for (int j = 0; j < COL2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// * Question 7
// ! HIGHLY IMPORTANT
// TODO: This question is about searching for a specific word in a 2D array of characters and printing out its location if found, or a message indicating that it was not found if it is not present in the array. The search should be case-insensitive, meaning that it should not matter whether the letters in the word are uppercase or lowercase when comparing them to the characters in the array.

/*
int main() 
{
    const int ROWS = 4;
    const int COLS = 5;

    string word;
    char arr[ROWS][COLS] = 
    {
        {'A', 'C', 'A', 'T', 'N'},
        {'F', 'M', 'D', 'O', 'G'},
        {'K', 'I', 'T', 'P', 'Q'},
        {'M', 'S', 'A', 'F', 'A'}
    };

    cout << "Enter the word you are searching for:" << endl;
    cin >> word;

    char letter1 = tolower(word.at(0));
    char letter2 = tolower(word.at(1));    
    char letter3 = tolower(word.at(2));
    bool found = false;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS - 2; j++)
        {
            if ((tolower(arr[i][j]) == letter1) && (tolower(arr[i][j + 1]) == letter2) && (tolower(arr[i][j + 2]) == letter3))
            {
                cout << "The word is found starting from row " << i + 1 << " and column " << j + 1 << endl;
                found = true;
                break;
            }
        }
    }

    if (found == false)
    {
        cout << "The word is not found in the array." << endl;
    }
    return 0;
}
*/

// * Question 8
// ! HIGHLY IMPORTANT
// TODO: Fill in the missing values (0s) in a 3x3 sudoku grid so that each row contains 1, 2, and 3 with no repeats, then print the completed grid.

/*
int main()
{
    // Define the dimensions of the puzzle grid
    const int ROWS = 3;
    const int COLS = 3;

    // Initialize the puzzle grid (0 represents a missing/empty cell)
    int puzzle[ROWS][COLS] = 
    {
        {1, 0, 3},
        {3, 1, 0},
        {2, 3, 0}
    };

    // Array to store the sum of each row, initialized to 0
    int sum[ROWS] = {0};

    // ── Step 1: Calculate the sum of each row ────────────────────────
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            // Add each element in the row to its corresponding sum
            sum[i] = sum[i] + puzzle[i][j];
        }
    }

    // ── Step 2: Fill in the missing values (0s) based on each row's sum ─
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            // If the row sum is 5, the missing value must be 1 (since 5+1=6)
            if ((sum[i] == 5) && (puzzle[i][j] == 0))
            {
                puzzle[i][j] = 1;
                break;
            }

            // If the row sum is 4, the missing value must be 2 (since 4+2=6)
            if ((sum[i] == 4) && (puzzle[i][j] == 0))
            {
                puzzle[i][j] = 2;
                break;
            }

            // If the row sum is 3, the missing value must be 3 (since 3+3=6)
            if ((sum[i] == 3) && (puzzle[i][j] == 0))
            {
                puzzle[i][j] = 3;
                break;
            }
        }
    }

    // ── Step 3: Print the completed puzzle grid ────────────────────────
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/