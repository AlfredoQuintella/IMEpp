#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n;
    int shop[n];

    for(int i = 0; i < n; i++){
        cin >> shop[i];
    }

    cin >> q;
    sort(shop, shop + n);

    for (int i = 0; i < q; i++) {
        int day = 0;
        int cont;
        cin >> day;

        // aaaaaaa odeio binarysearch
        cont = lower_bound(shop, shop + n, day + 1) - shop;

        cout << cont << "\n";
    }
}
