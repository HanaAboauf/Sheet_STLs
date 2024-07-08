#include <iostream>
#include <queue>
using namespace std;

void operation(int n) {
    queue<int> qq;
    for (int i = 1; i <= n; ++i)
        qq.push(i);

    cout << "Discarded cards:";
    if (n > 1)
        cout << " ";
    bool first = true;
    while (qq.size() > 1) {
        if (!first) {
            cout << ", ";
        }
        first = false;
        cout << qq.front();
        qq.pop();
        int second = qq.front();
        qq.pop();
        qq.push(second);
    }
    cout << "\nRemaining card: " << qq.front() << "\n";
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        if (n >= 2) {
            operation(n);
        } else if (n == 1) {
            cout << "Discarded cards:\n";
            cout << "Remaining card: 1\n";
        }
    }
    return 0;
}