#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;  // read the input string

    string target;
    int count = 1;

    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == s[i-1]) {
            count++;
        } else {
            target += s[i-1];       
            target += to_string(count);
            count = 1;
        }
    }

    // Output target version if it's shorter, else the original string
    if (target.size() < s.size()) {
        cout << target;
    } else {
        cout << s;
    }

    return 0;
}
