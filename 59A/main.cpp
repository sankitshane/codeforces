#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int upper_count = 0;
    int lower_count = 0;

    for (char c : input) {
        if (isupper(c)) {
            upper_count++;
        } else if (islower(c)) {
            lower_count++;
        }
    }

    if (upper_count > lower_count) {
        for (char &c : input) {
            c = toupper(c);
        }
    } else {
        for (char &c : input) {
            c = tolower(c);
        }
    }
    cout << input << endl;

    return 0;
}
