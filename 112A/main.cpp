#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string first;
    string second;
    int result = 0;
    cin >> first;
    cin >> second;

    for (int i = 0; i < first.length(); i++) {
        if (tolower(first[i]) < tolower(second[i])){
            result = -1;
            break;
        } else if (tolower(first[i]) > tolower(second[i])) {
            result = 1;
            break;
        }
    }

    cout << result;
    return 0;
}
