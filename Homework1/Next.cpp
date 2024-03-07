#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

const int mod = 1e9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    set<int> s;
    char prev = '+';
    int prev_ans = 0;
    while(t--) {
        char c;
        int x;
        cin >> c >> x;
        if(c == '+') {
            if(prev == '+') {
                s.insert(x);
            } else {
                s.insert((prev_ans + x) % mod);
            }
        } else {
            auto itr = s.lower_bound(x);
            if(itr == s.end()) {
                prev_ans = -1;
            } else {
                prev_ans = *itr;
            }
            cout << prev_ans << "\n";
        }
        prev = c;
    }
    return 0; 
}
