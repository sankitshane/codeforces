#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    cin >> input;

    int count_a = 0, count_d = 0;
    for (int i = 0; i < n; i++) {
        if (input[i] == 'A') {
            count_a++;
        } else if (input[i] == 'D') {
            count_d++;
        }
    }

    if (count_a > count_d) {
        cout << "Anton" << endl;
    } else if (count_d > count_a) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
