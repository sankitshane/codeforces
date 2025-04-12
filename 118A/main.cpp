#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Create a hash set of vowels
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    string s;
    cin >> s;
    string ans = "";

    for (char c : s) {
        char lower_c = (c >= 'A' && c <= 'Z') ? c + 32 : c;

        if (vowels.find(lower_c) == vowels.end()) {
            ans += '.';
            ans += lower_c;
        }
    }

    cout << ans << endl;
    return 0;
}