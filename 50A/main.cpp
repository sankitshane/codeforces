#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;

    while (true) {
        if (n > m) {
            swap(n, m);
        }

        if (n < 1 || m < 2) {
            break;
        }

        ans += n;;
        m -= 2;
    }
    cout << ans;
    return 0;
}
