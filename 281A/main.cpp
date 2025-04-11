#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    char first_char = input[0];
    int ascii_value = static_cast<int>(first_char);

    if (ascii_value >= 97) {
        first_char = static_cast<char>(ascii_value - 32);
    }
    cout << first_char + input.substr(1) << endl;
    return 0;
}
