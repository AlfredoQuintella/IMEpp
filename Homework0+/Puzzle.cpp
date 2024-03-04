#include <bits/stdc++.h>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int seq[m];
    for(int i = 0; i < m; i++){
        cin >> seq[i];
    }
    sort(seq, seq + m);
    int minDifference = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        int difference = seq[i + n - 1] - seq[i];
        minDifference = min(minDifference, difference);
    }
    cout << minDifference;
}
