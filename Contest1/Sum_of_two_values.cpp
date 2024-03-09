#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, restante, a;
    cin >> n >> x;

    vector<pair<int, int>> list;

    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push_back({a, i + 1});
    }

    sort(list.begin(), list.end());

    for (int i = 0; i < list.size(); i++) {
        restante = x - list[i].first;
        auto it = lower_bound(list.begin(), list.end(), make_pair(restante, 0));

        if (it != list.end() && it->first == restante && it->second != list[i].second) {
            cout << list[i].second << " " << it->second;
            return 0;
        }
    }
    cout << -1;
}
