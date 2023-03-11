#include <iostream>
using std::string;
using std::cout;
using std::cin;

bool is_palindrome(const string& word)
{
    string rev_word = "";

    for(int e = word.length() - 1; e >= 0; e--)
    {
      	rev_word += word[e];
    }

    if (rev_word == word)
    {
        cout << "\nIt is a palindrome: True.";
        return true;
    }

    else
    {
        cout << "\nIt is not a palindrome: False.";
        return false;
    }
}