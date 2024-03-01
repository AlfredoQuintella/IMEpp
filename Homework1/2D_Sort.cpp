#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compar(pair<int, int> p1, pair<int, int> p2) {
    return (p1.first < p2.first) || ((p1.first == p2.first) && (p1.second > p2.second));
}

void solve() {
    int n, a, b;
    scanf("%d", &n);

    vector<pair<int, int>> list;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        list.push_back(make_pair(a, b));
    }
    sort(list.begin(), list.end(), compar);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", list[i].first, list[i].second);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}
