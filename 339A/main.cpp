#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int arr[] = {0, 0, 0};
    
    for (char ch : input) {
        if (ch == '1') {
            arr[0]++;
        } else if (ch == '2') {
            arr[1]++;
        } else if (ch == '3') {
            arr[2]++;
        }
    }

    int pointer = 0;
    string ans;

    while (pointer < 3) {
        if (arr[pointer] > 0) {
            ans += to_string(pointer + 1);
            ans += '+';
            arr[pointer]--;
        } else {
            pointer++;
        }
    }

    ans.pop_back();
    cout << ans << endl;
    return 0;
}
