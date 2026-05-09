#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Bank {
private:
    // userID -> balance
    unordered_map<int, int> accounts;

public:

    // CREATE X Y
    bool create(int userID, int amount) {

        // User already exists
        if (accounts.count(userID)) {
            accounts[userID] += amount;
            return false;
        }

        // Create new account
        accounts[userID] = amount;
        return true;
    }

    // DEBIT X Y
    bool debit(int userID, int amount) {

        // User not found or insufficient balance
        if (!accounts.count(userID) || accounts[userID] < amount)
            return false;

        accounts[userID] -= amount;
        return true;
    }

    // CREDIT X Y
    bool credit(int userID, int amount) {

        // User not found
        if (!accounts.count(userID))
            return false;

        accounts[userID] += amount;
        return true;
    }

    // BALANCE X
    int balance(int userID) {

        // User not found
        if (!accounts.count(userID))
            return -1;

        return accounts[userID];
    }
};

int main() {

    int Q;
    cin >> Q;

    Bank bank;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "CREATE") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.create(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "DEBIT") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.debit(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "CREDIT") {

            int X, Y;
            cin >> X >> Y;

            cout << (bank.credit(X, Y) ? "true" : "false") << endl;
        }

        else if (query == "BALANCE") {

            int X;
            cin >> X;

            cout << bank.balance(X) << endl;
        }
    }

    return 0;
}
