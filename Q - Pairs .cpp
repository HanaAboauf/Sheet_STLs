#include <iostream>
#include <vector>
using namespace std;

#define hana ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<pair<int, int>> pairs;

bool isValid(int x, int y) {
    for (const auto& p : pairs) {
        if (p.first != x && p.first != y && p.second != x && p.second != y) {
            return false;
        }
    }
    return true;
}

int main() {
    hana

    int n, m;
    cin >> n >> m;

    pairs.resize(m);

    for (int i = 0; i < m; ++i) {
        cin >> pairs[i].first >> pairs[i].second;
    }


    // for (int i = 0; i < 2; ++i) == for(int i = 0:{pairs[0].first,pairs[0].second})
    for (int i = 0; i < 2; ++i) {
        for (int j = 1; j < m; ++j) {
            if (pairs[j].first != pairs[i].first && pairs[j].first != pairs[i].second &&
                pairs[j].second != pairs[i].first && pairs[j].second != pairs[i].second) {
                if (isValid(pairs[i].first, pairs[j].first) || isValid(pairs[i].first, pairs[j].second) ||
                    isValid(pairs[i].second, pairs[j].first) || isValid(pairs[i].second, pairs[j].second)) {
                    cout << "YES" << "\n";
                    return 0;
                }
            }
        }
    }

    cout << "NO" << "\n";
    return 0;
}