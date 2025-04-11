#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string input;
    cin >> input;

    unordered_set<char> unique_chars;
    for (char c : input) {
        unique_chars.insert(c);
    }

    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
