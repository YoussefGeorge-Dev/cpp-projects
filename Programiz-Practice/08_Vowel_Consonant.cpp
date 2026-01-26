#include <iostream>
using namespace std; 

int main() 
{
char ch;
cout << "Enter a character" << endl;
cin >> ch;
if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    cout << ch << " is a vowel." << endl;
else
    cout << ch << " is a consonant." << endl;

return 0;
}