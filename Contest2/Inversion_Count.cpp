#include <iostream>

using namespace std;

long long merge(int arr[], int l, int m, int r) {
    long long inv_count = 0;

    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
            inv_count += n1 - i;
        }
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];

    return inv_count;
}

long long mergeSort(int arr[], int l, int r) {
    long long inv_count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv_count += mergeSort(arr, l, m);
        inv_count += mergeSort(arr, m + 1, r);
        inv_count += merge(arr, l, m, r);
    }
    return inv_count;
}

long long countSwap(int arr[], int n) {
    return mergeSort(arr, 0, n - 1);
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << countSwap(arr, n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
        if(t != 0) cout << "\n";

    }
}
