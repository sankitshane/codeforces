#include <iostream>
using namespace std;

string round_it(const string& word) {
    if (word.length() > 10) {
        return word[0] + to_string(word.length() - 2) + word.back();
    }
    return word;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string word;
        cin >> word;
        cout << round_it(word) << endl;
    }
    return 0;
}
