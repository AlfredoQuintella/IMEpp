#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cout << n - i << " ";
    }
    cout << 1 << " ";
    for(int i = 2; i < n - k + 1 ; i++){
        cout << i << " ";
    }
}
