/* A String-matching tool validates if IDs are palindromes. Implement
a solution to check whether a given ID is a palindrome. */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string id;
    bool palindrome = true;
    int n;

    cout << "Enter th id";
    cin >> id;

               n = id.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (id[i] != id[n - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";

    else
        cout << "Not palindrome";

    return 0;
}
