#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    // Check empty input
    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Excuse templates
    vector<string> excuses = {

        "{name} couldn't finish the assignment because the laptop battery died unexpectedly.",

        "{name} tried finishing the homework, but the internet stopped working.",

        "{name} was ready to submit the assignment when the file mysteriously disappeared.",

        "{name} couldn't complete the work because the system suddenly restarted for updates.",

        "{name} almost finished the homework, but the keyboard stopped responding.",

        "{name} was doing the assignment when the Wi-Fi vanished without warning.",

        "{name}'s computer froze right before saving the assignment.",

        "{name} spent hours on the assignment, only for the software to crash suddenly.",

        "{name} tried submitting the homework, but the portal refused to upload the file.",

        "{name} couldn't finish the assignment because the power went out unexpectedly."
    };

    // Random seed
    srand(time(0));

    // Random index
    int index = rand() % excuses.size();

    string excuse = excuses[index];

    // Replace {name} placeholder
    size_t pos = excuse.find("{name}");

    while (pos != string::npos) {
        excuse.replace(pos, 6, name);
        pos = excuse.find("{name}");
    }

    // Display excuse
    cout << "\nGenerated Excuse:\n";
    cout << excuse << endl;

    return 0;
}
