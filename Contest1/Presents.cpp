#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    cin >> n;
    int list[n];

    for(int i = 0; i < n; i++){
        cin >> a;
        list[a - 1] = i + 1;
    }
    for(int i = 0; i < n; i++){
        cout << list[i] << " ";
    }

}
