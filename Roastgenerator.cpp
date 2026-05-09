#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // Check for empty input
    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Roast templates
    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name}'s code has more twists than a Bollywood movie.",
        "Even Google gives up trying to understand {name}'s search history.",
        "{name} doesn't make bugs — they create unexpected features.",
        "If laziness had a brand ambassador, it would definitely be {name}.",
        "{name}'s WiFi disconnects just to avoid loading their code.",
        "{name} types so slowly that auto-save falls asleep.",
        "{name}'s coding logic is like instant noodles — quick, confusing, and slightly dangerous."
    };

    // Random seed
    srand(time(0));

    // Random roast selection
    int index = rand() % roasts.size();

    string roast = roasts[index];

    // Replace {name} with actual user name
    size_t pos = roast.find("{name}");

    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    // Display roast
    cout << "\nFunny Roast:\n";
    cout << roast << endl;

    return 0;
}
