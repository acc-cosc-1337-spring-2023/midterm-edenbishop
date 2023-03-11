#include <iostream>
//#include "question2.cpp"
using std::string;
using std::cout;
using std::cin;

int main()
{
    string word; 
    char answer;

    cout << "Hello would you like to figure out if a word is a palindrome? (Type y or Y for yes) ";
    cin >> answer;
    
    do
    {
        cout << "Please enter a word so we can figure out if it is a palindrome: ";
        cin >> word;

        cout << "Calling function... " << is_palindrome(word);

        cout << "\nWould you like to go again? (y or Y for yes, else for no): ";
        cin >> answer;
    }

    while (answer == 'y' || "Y");

    return 0;
}