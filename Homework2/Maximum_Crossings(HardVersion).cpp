#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long merge(vector<pair<int,int>>& arr, int l, int m, int r) {
    long long inv_count = 0;

    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i].first;
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j].first;

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++].first = L[i++];
        } else {
            arr[k++].first = R[j++];
            inv_count += n1 - i;
        }
    }

    while (i < n1)
        arr[k++].first = L[i++];
    while (j < n2)
        arr[k++].first = R[j++];

    return inv_count;
}

long long mergeSort(vector<pair<int,int>>& arr, int l, int r) {
    long long inv_count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv_count += mergeSort(arr, l, m);
        inv_count += mergeSort(arr, m + 1, r);
        inv_count += merge(arr, l, m, r);
    }
    return inv_count;
}

long long countSwap(vector<pair<int,int>>& arr) {
    return mergeSort(arr, 0, arr.size() - 1);
}

long long newcount(vector<pair<int,int>> list){
    long long repeticoes = 0;
    int tamanho = list.size();
    vector<int> num(tamanho,0);

    for(int i = 0; i < tamanho; i++){
        num[list[i].first-1]++;
    }

	for(int i = 0; i < tamanho; i++){
		if(num[i] > 1){
			repeticoes += (long long)num[i] * (num[i] - 1) / 2;
		}
	}
	return repeticoes;
}

void solve(){
    int n, a;
    cin >> n;
    vector<pair<int, int>> list;
    for (int i = 0; i < n; i++) {
        cin >> a;
        list.push_back(make_pair(a, i));
    }
    long long count = countSwap(list) + newcount(list);
    cout << count << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
