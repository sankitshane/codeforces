#include <iostream> 
#include <sstream>
using namespace std;

int main() {
    int n;
    int ans = 0;
    cin >> n;

    while (n--) { 
        int submission = 3;
        int count = 0;
        while (submission--) {
            int s;
            cin >> s;
            if (s == 1) {
                count++;
            }
        }
        
        if (count >= 2) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}