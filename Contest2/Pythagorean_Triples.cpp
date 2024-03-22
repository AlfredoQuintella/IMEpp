#include <iostream>
#include <cmath>

using namespace std;

void solve(){
 int n;
    cin >> n;
    int ctt = 0;
    for (int i = 3; i * i <= 2 * n - 1; i += 2)
      ++ctt;
    cout << ctt << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a;
    cin >> t;
    while(t--){
        solve();
    }
}
