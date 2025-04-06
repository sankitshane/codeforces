#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    while (n--) {
        string s;
        cin >> s;

        if (s.c_str()[1] == '+') {
            ans++;
        } else if (s.c_str()[1] == '-') {
            ans--;
        }
    }

    cout << ans << endl;
    return 0;
}
