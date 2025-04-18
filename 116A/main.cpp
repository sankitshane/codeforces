#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int current = 0;
    int result = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current += b - a;
        if (current > result) {
            result = current;
        }
    }  
    cout << result << endl;
    return 0;
}
