#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length()) {
        cout << "No" << endl;
        return 0;
    }

    string combined = s + s;
    if (combined.find(t) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}