#include <iostream>
#include <map>

using namespace std;

long long int mod(int x, int y, int n){
    if(y == 0){
        return 1;
    }
    long long anterior = mod(x, y/2, n);
    if(y%2 == 0) return ((anterior % n)*(anterior % n))%n;
    else return ((x%n)*(anterior % n)*(anterior % n))%n;
}

void solve(){
    int x, y, n;
    cin >> x >> y >> n;
    cout << mod(x, y, n) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
