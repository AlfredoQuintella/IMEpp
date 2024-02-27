#include <bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

void BubbleSort(int arr[], int n){
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(){
    int N, K, manter, sum = 0;
    cin >> N >> K;
    manter = N;
    int precos[N];
    while(N--){
        cin >> precos[N];
    }
    BubbleSort(precos, manter);
    for(int i = 0; i < K; i++){
        sum = sum + precos[i];
    }
    cout << sum;
}
