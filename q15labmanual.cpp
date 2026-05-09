/*A data analytics tool finds the maximum sales figure from multiple entries.
Implement a solution to accept ‘n’ numbers and display the largest.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    float num, max;

    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Enter numbers:\n";
    cin >> num;
    max = num;

    for (int i = 2; i <= n; i++) {
        cin >> num;

        if (num > max) {
            max = num;
        }
    }

    cout << "Largest number is: " << max;

    return 0;
}
