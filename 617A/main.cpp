#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 5; i > 0; --i) {
        result += int(n / i);
        n = n % i;
        if (n == 0) {
            break;
        }
    }
    cout << result << endl;
    return 0;
}
