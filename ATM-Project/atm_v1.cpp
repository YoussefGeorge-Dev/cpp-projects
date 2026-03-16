#include <iostream>
#include <string>
using namespace std;

int main() {

    string correctPIN = "1234";
    double balance    = 5000.00;

    string enteredPIN = "";
    int    attempts   = 0;
    bool   loggedIn   = false;
    int    choice     = 0;
    double amount     = 0.0;

    cout << "Welcome to ATM V1.0" << endl;

    // PIN login - max 3 attempts
    while (attempts < 3 && loggedIn == false) {

        cout << "\nEnter your PIN: ";
        cin  >> enteredPIN;
        attempts = attempts + 1;

        if (enteredPIN == correctPIN) {
            loggedIn = true;
            cout << "PIN accepted. Welcome!" << endl;
        } else {
            if (attempts < 3) {
                cout << "Wrong PIN. You have " << (3 - attempts)
                     << " attempt(s) left." << endl;
            } else {
                cout << "Card blocked after 3 failed attempts." << endl;
                cout << "Please contact your bank. Goodbye." << endl;
            }
        }
    }

    // Main menu
    while (loggedIn == true) {

        cout << "\nMAIN MENU" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit"       << endl;
        cout << "3. Withdraw"      << endl;
        cout << "4. Exit"          << endl;
        cout << "Select an option: ";
        cin  >> choice;

        switch (choice) {

            case 1:
                cout << "Current Balance: EGP " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: EGP ";
                cin  >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount. Must be greater than 0." << endl;
                } else {
                    balance = balance + amount;
                    cout << "Deposited EGP " << amount << "." << endl;
                    cout << "New Balance: EGP " << balance << endl;
                }
                break;

            case 3:
                cout << "\n  Enter withdrawal amount: EGP ";
                cin  >> amount;

                if (amount <= 0) {
                    cout << "  Invalid amount. Must be greater than 0." << endl;
                } else if (amount > balance) {
                    cout << "  Insufficient funds." << endl;
                    cout << "  Available Balance: EGP " << balance << endl;
                } else {
                    balance = balance - amount;
                    cout << "  Dispensing EGP " << amount << ". Please collect your cash." << endl;
                    cout << "  Remaining Balance: EGP " << balance << endl;
                }
                break;

            case 4:
                loggedIn = false;
                cout << "\n  Thank you for using ATM V1.0. Goodbye!" << endl;
                cout << "========================================\n"  << endl;
                break;

            default:
                cout << "  Invalid option. Please choose 1-4." << endl;
        }
    }

    return 0;
}