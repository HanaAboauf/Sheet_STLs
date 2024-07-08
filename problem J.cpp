#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < n; ++i) {
            int priority;
            cin >> priority;
            q.push({priority, i});
            pq.push(priority);
        }

        int time = 0;
        while (!q.empty()) {
            int current_priority = q.front().first;
            int current_idx = q.front().second;
            q.pop();

            if (current_priority == pq.top()) {
                ++time;
                pq.pop();
                if (current_idx == m) {
                    cout << time << endl;
                    break;
                }
            } else {
                q.push({current_priority, current_idx});
            }
        }
    }
    return 0;
}