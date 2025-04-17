#include <iostream>
using namespace std;

int main() {
    string input1;
    string input2;
    cin >> input1;
    cin >> input2;

    if (input1.length() != input2.length()) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < input1.length(); i++) {
        if (input1[i] != input2[input2.length() - 1 - i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
