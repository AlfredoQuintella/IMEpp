#include <iostream>
#include <vector>

using namespace std;

int n;
bool is_prime[32] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1};
vector<int> sequence;
vector<bool> check(20, 0);

void solve(vector<int> sequence, vector<bool> check, int layer=1){
    
    if (layer == n and is_prime[sequence[0] + sequence[n - 1]]) {
        for (auto a : sequence){
            cout << a;
            if (a != sequence.back()) cout << ' ';
        }
        cout << '\n';
        return; 
    }

    for (int i = 1; i <= n; i++) {
        if (!check[i] and is_prime[i + sequence[layer - 1]]) {
            check[i] = 1;
            sequence.push_back(i);

            solve(sequence, check, layer + 1);

            check[i] = 0;
            sequence.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int contador = 1;

    check[1] = 1;
    sequence.push_back(1);

    bool saboyaotario = false;

    while (cin >> n) {
        if(saboyaotario) cout << "\n";
        cout << "Case " << contador++ << ":" << "\n";
        solve(sequence, check);
        saboyaotario = 1;
    }

    return 0;
}
