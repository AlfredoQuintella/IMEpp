#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}

	vector<int> p(n, 0);
	for (int i = 0; i < m; ++i){
		int pos;
		cin >> pos;
		p[pos - 1] = 1;
	}

	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (a[j] > a[j + 1] && p[j]){
				swap(a[j], a[j + 1]);
			}
		}
	}

	bool test = true;
	for (int i = 0; i < n - 1; ++i){
		if(a[i] > a[i + 1]) test = false;
	}
	if (test)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
