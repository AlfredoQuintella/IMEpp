#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(){
    int n, s, r;
    cin >> n >> s >> r;
    int a = r / (n - 1);
    int b = r % (n - 1);
    vector<int>dice;
    dice.push_back(s - r);

    for(int i = 0; i < n - 1; i++){
        if(b == 0){
            dice.push_back(a);
        }
        else{
            dice.push_back(a + 1);
            b--;
        }
    }
    for(int i = 0; i < dice.size(); i++){
        cout << dice[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
